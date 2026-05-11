class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                cnt++;
            }
            else{
                cnt++;
                 idx+=min(2,cnt);
                 cnt=0;
            }
        }
        cnt++;
        idx+=min(2,cnt);
        int i=2;
        int k=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[k-2]){
                 nums[k]=nums[i];
                 k++;
            }
        }
        return idx;
    }
};