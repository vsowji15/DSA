class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>s;
        for(int i=0;i<strs.size();i++){
            s.push_back(strs[i]);
            sort(s[i].begin(),s[i].end());
        }
        map<string,vector<int>>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }
        vector<vector<string>>ans(mp.size());
        vector<int>v;
        int j=0;
        for(auto it:mp){
             v=it.second;
             for(int i=0;i<v.size();i++){
                ans[j].push_back(strs[v[i]]);
             }
             j++;
        }
        return ans;
    }
};