class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(int i:nums){
        mp[i]=1;
       }
       int mx=0;
       for(auto it:mp){
        int n=it.first;
        if(mp.find(n-1)==mp.end()){
            int curr=n;
            int cnt=1;
            while(mp.find(curr+1)!=mp.end()){
                curr++;
                cnt++;
            }
            mx=max(mx,cnt);
        }
       }
       return mx;
    }
};