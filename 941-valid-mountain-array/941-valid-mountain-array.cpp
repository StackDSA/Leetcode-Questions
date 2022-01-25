class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        //Not similar to peak element. There is a mountain array if 2 people start from the extremes of the array and meet at the same point at once.
        int n = arr.size(), i = 0, j = n - 1;
        while (i + 1 < n && arr[i] < arr[i + 1]) i++;
        while (j > 0 && arr[j - 1] > arr[j]) j--;
        return i > 0 && i == j && j < n - 1;
    }
};