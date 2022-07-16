class Solution {
public:
    bool canJump(vector<int>& arr) {
        // we have to use 3 variables here- steps, step and jumps. 
        int n=arr.size();
        
        if(arr[0]==0&&n>1) return false;
        int steps=1, maxReach=arr[0],step=arr[0];
        for(int i=1;i<n;i++){
            if(i==n-1){
                return steps;
            }
            maxReach=max((i+arr[i]),maxReach);
            step--;
            if (step == 0) {
                steps++;
                if(i>=maxReach)
                   return false;
                step = maxReach-i;
            }
        }
        return true;
    }
};