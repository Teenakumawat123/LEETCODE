class NumArray {
public:
    vector<int>arr;
    vector<int>arr1;
    NumArray(vector<int>& nums) {
        arr=nums;
        arr1=nums;
        for(int i=1;i<nums.size();i++){
            arr[i]+=arr[i-1];
        }
    }
    
   void update(int idx, int val) {
    int diff = val - arr1[idx];  // calculate change
    arr1[idx] = val;

    // update prefix sum array from idx onward
    for(int i = idx; i < arr.size(); i++){
        arr[i] += diff;
    }
}
    
    int sumRange(int left, int right) {
        if(left==0) return arr[right];
        else return arr[right]-arr[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */