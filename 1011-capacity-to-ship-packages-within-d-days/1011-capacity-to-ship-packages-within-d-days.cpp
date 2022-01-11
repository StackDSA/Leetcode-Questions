class Solution {
    bool isValid(vector<int>nums, int n, int sumo, int days){
        int packages=1;
        int i=0,sum=0;
        while(i<n){
            sum+=nums[i];
            if(sum>sumo){
                packages++;
                sum=nums[i];
            }
            if(packages>days) return false;
            i++;
        }
        
        return true;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        //Q just like allocate number of books.Here capacity isn't given
        if(weights.size()<days) return -1;
        int maxe=INT_MIN, sumo=0, n=weights.size(),ans=-1;
        for(int i=0;i<n;i++){
            maxe=max(maxe,weights[i]);
            sumo+=weights[i];
        }
        int l=maxe,r=sumo;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isValid(weights,n,mid,days)){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};