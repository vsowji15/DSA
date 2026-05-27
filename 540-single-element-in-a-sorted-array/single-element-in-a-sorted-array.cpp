class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        long long sm=0,sm2=0;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            sm+=nums[i];
        }
        for(auto i:s){
            sm2+=i;
        }
        return sm2*2-sm;
    }
};