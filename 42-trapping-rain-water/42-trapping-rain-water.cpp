class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0,rmax=0,water=0,n=height.size(),l=0;
        int r=n-1;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=lmax) lmax=height[l];
                else water+=(lmax-height[l]);
                l++;
            }
            else{
                if(height[r]>=rmax) rmax=height[r];
                else water+=(rmax-height[r]);
                r--;
            }
        }
        return water;
    }
};