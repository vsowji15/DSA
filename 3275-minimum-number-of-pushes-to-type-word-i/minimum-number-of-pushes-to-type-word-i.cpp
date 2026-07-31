class Solution {
public:
    int minimumPushes(string word) {
        /*map<char,int>mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }
        vector<int>freq;
        for(auto p:mp){
            freq.push_back(p.second);
        }
        sort(freq.begin(),freq.end(),greater<int>());*/
        int cnt=1,c=1,ans=0;
        for(int i=0;i<word.size();i++){
           if(c<=8){
            ans+=cnt;
            c++;
           }
           else{
            c=1;
            cnt++;
            ans+=cnt;
            c++;
           }
        }
        return ans;
    }
};