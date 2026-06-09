class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mx=0,mn=pow(10,9);
        long long r=k;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            mn=min(mn,nums[i]);
        }
        return r*(mx-mn);
    }
};