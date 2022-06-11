class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256,-1); // We will store the location of the last index where the repeated char is found.
        int n=s.length(), l=0, r=0, len=0;
        while(r<n){
            if(v[s[r]]!=-1) l=max(v[s[r]]+1, l);
            v[s[r]]=r;
            len=max(len, r-l+1);
            r++;
        }
        return len;
    }
};

//This is a TC=O(2*n) and SC=O(n) solution. 
        // if(s.length()<=1) return s.length();
        // int l=0,r=0, n=s.length(),maxLength=0;
        // vector<int>v(256,0);
        // while(r<n){
        //     v[s[r]]++;
        //     if(r==n-1){
        //         if(v[s[r]]>1){
        //             r--;
        //         }
        //         maxLength=max(maxLength, (r-l+1));
        //         return maxLength;
        //     }  
        //     else if(r<n){
        //         if(v[s[r]]>1){
        //         maxLength=max(maxLength, (r-l));
        //         while(v[s[r]]>1){
        //             v[s[l]]--;
        //             l++;
        //         }
        //         }
        //     }
        //     r++;
        // }
        // return maxLength;