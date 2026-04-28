class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        stack<int>mn;
        int mx=0;
        int ans=-1;
        mn.push(nums.size()-1);
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<=nums[mn.top()]){
                mn.push(i);
            }
        }
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            while(!mn.empty() && mn.top()<i){
                mn.pop();
            }
            if(mx-nums[mn.top()]<=k){
                ans=i;
                break;
            }
        }
        return ans;
    }
};