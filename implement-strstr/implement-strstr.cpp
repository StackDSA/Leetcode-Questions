class Solution {
    bool check(string s,string a){
        if(s==a) return true;
        return false;
    }
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0) return 0;
        if(haystack.length()<needle.length()) return -1;
        char a=needle[0];
        for(int i=0;i<=haystack.length()-needle.length();i++){
            if(haystack[i]==a){
                if(check(haystack.substr(i,needle.length()),needle)){
                    return i;
                }
            }
        }
        return -1;
    }
};