// Check out Solution no. 4 from Solution tab or watch Nick White's video. Best possible solution.
class Solution {
    int check(string s, int left, int right){
        int n=s.length(),l=left,r=right;
        while(l>=0&&r<n&&s[l]==s[r]){
            l--;r++;
        }
        return r-l-1;
    }
public:
    string longestPalindrome(string s) {
        if(s.length()==1) return s;
        int start=0,end=0,n=s.length();
        for(int i=0;i<n;i++){
            int l1=check(s,i,i);
            int l2=check(s,i,i+1);
            int len=max(l1,l2);
            if(len>end-start){
                start=i-(len-1)/2;
                end=i+len/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};
