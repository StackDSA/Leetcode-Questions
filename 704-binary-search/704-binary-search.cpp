class Solution {
public:
    int search(vector<int>& arr, int x) {
        if(arr.size()==1){
            if(arr[0]==x){
                return 0;
            }
            else{
                return -1;
            }
        }
        int l=0;
        int r=arr.size()-1;
        while (l <= r) {
            int m = l + (r - l) / 2;

            // Check if x is present at mid
            if (arr[m] == x)
                return m;

            // If x greater, ignore left half
            if (arr[m] < x)
                l = m + 1;

            // If x is smaller, ignore right half
            else
                r = m - 1;
        }
        return -1;
    }
};