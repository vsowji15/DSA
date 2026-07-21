class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int cnt=0;
        vector<int>ans;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])
            cnt++;
            else{
                ans.push_back(cnt+1);
                cnt=0;
            }
        }
        ans.push_back(cnt+1);
        if(ans.size()==1){
            if(s[0]=='1')
            return ans[0];
            else
            return 0;
        }
        if(ans.size()==2){
            if(s[0]=='0')
            return ans[1];
            else
            return ans[0];
        }
        if(ans.size()==3){
            if(s[0]=='0')
            return s.size();
            else
            return ans[0]+ans[2];
        }
        int sm=0,b;
        if(s[0]=='0')
         b=0;
        else
         b=1;
         vector<int>v,idx;
        for(int i=b;i<ans.size()-2;i+=2){
                v.push_back(ans[i]+ans[i+1]+ans[i+2]);
                idx.push_back(i+1);
        }
        if(s[0]=='0'){
            for(int i=1;i<ans.size();i+=2){
                sm+=ans[i];
            }
        }
        else{
            for(int i=0;i<ans.size();i+=2){
                sm+=ans[i];
            }
        }
       int mx=0;
       for(int i=0;i<v.size();i++){
        mx=max(mx,v[i]+sm-ans[idx[i]]);
       }
       return mx;
    }
};