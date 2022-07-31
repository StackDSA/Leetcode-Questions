class NumArray {
    vector<int>arr;
    int sum=0;
public:
    
    NumArray(vector<int>& nums) {
        arr = nums;
        sum = accumulate(arr.begin(), arr.end(), 0);
    }
    
    void update(int index, int val) {
        sum -= arr[index];
        arr[index] = val;
        sum += val;
    }
    
    int sumRange(int left, int right) {
        int  res = sum;
        for(int i = 0; i < left; ++i)
            res -= arr[i];
        for(int i = right+1; i < arr.size(); ++i)
            res -= arr[i];
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */