class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=0,j=s.size();
        vector<int>ans;
        for(int l=0;l<s.size();l++){
            if(s[l]=='I'){
                ans.push_back(i);
                i++;
            }
            else{
                ans.push_back(j);
                j--;
            }
        }
        ans.push_back(i);
        return ans;
    }
};