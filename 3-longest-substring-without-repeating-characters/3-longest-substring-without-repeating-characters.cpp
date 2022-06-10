class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1) return s.length();
        int l=0,r=0, n=s.length(),maxLength=0;
        vector<int>v(256,0);
        while(r<n){
            v[s[r]]++;
            if(r==n-1){
                if(v[s[r]]>1){
                    r--;
                }
                maxLength=max(maxLength, (r-l+1));
                return maxLength;
            }  
            else if(r<n){
                if(v[s[r]]>1){
                maxLength=max(maxLength, (r-l));
                while(v[s[r]]>1){
                    v[s[l]]--;
                    l++;
                }
                }
            }
            r++;
        }
        return maxLength;
    }
};