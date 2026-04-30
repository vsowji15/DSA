class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt=0;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    cnt++;
                }
            }
            if(cnt==i){
                ans.push_back(nums[i]);
            }
            else{
                cnt=0;
               for(int j=i+1;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    cnt++;
                }
            } 
            if(cnt==nums.size()-i-1){
                ans.push_back(nums[i]);
            }
            }
        }
        return ans;
    }
};