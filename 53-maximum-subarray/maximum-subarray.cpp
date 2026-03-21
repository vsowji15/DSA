class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0];
        int curr_sum=0;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            mx=max(mx,curr_sum);
            if(curr_sum<0){
                curr_sum=0;
            }
        }
        return mx;
    }
};