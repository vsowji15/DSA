class NumArray {
public:
    vector<int>v;
    vector<int>p;
    NumArray(vector<int>& nums) {
        v=nums;
        vector<int>pr(nums.size(),0);
        pr[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pr[i]=pr[i-1]+nums[i];
        }
        p=pr;
           }
    
    int sumRange(int left, int right) {
        if(left!=0){
            left--;
            return p[right]-p[left];
        }
        return p[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */