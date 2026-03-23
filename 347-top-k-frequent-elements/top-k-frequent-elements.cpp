class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<vector<int>>v(mp.size());
        int i=0;
        for(auto it:mp){
          v[i].push_back(it.second);
          v[i].push_back(it.first);
          i++;
        }
        sort(v.begin(),v.end(),greater<vector<int>>());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i][1]);
        }
        return ans;
    }
};