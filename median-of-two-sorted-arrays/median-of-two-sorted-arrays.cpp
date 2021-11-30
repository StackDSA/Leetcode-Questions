class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        int m=nums1.size();
        int n=nums2.size();
        int mergedArray[n+m];
        for(int i=0;i<m;i++){
            mergedArray[i]=nums1[i];
        }
        for(int i=m;i<m+n;i++){
            mergedArray[i]=nums2[i-m];
        }
        sort(mergedArray,mergedArray+(m+n));
        if((m+n)%2==0){
            median=(1/2.0)*(mergedArray[(m+n)/2]+mergedArray[(m+n)/2-1]);
        }
        else{
            median=mergedArray[(m+n)/2];
        }
        return median;
    }
};