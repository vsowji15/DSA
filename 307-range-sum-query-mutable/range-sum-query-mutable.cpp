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
    
    void update(int index, int val) {
        int diff=abs(v[index]-val);
        if(v[index]>val){
            for(int i=index;i<v.size();i++){
                p[i]-=diff;
            }
        }
        else{
            for(int i=index;i<v.size();i++){
                p[i]+=diff;
            }
        }
        v[index]=val;
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
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */