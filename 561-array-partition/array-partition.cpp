class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sm=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                sm+=nums[i];
            }
        }
        return sm;
    }
};