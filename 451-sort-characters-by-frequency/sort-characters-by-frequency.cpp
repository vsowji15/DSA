class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i:s){
            mp[i]++;
        }
        vector<pair<int,char>>ans;
        for(auto it:mp){
            ans.push_back({it.second,it.first});
        }
        sort(ans.begin(),ans.end(),greater<pair<int,char>>());
        string r;
        for(auto it:ans){
            while(it.first--){
                r.push_back(it.second);
            }
        }
        return r;
    }
};