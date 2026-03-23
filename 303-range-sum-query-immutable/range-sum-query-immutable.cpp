class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
        v=nums;
    }
    
    int sumRange(int left, int right) {
        int sm=0;
        for(int i=left;i<=right;i++){
            sm+=v[i];
        }
        return sm;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */