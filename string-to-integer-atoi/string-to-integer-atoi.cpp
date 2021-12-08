class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int n=s.length(),i=0,sign=1;
        while(i<n&&s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            sign=1;
            i++;
        }
        while(s[i]>='0'&&s[i]<='9'){
            ans*=10;
            ans+=(s[i++]-'0');
            if(ans*sign >= INT_MAX) return INT_MAX;
            if(ans*sign <= INT_MIN) return INT_MIN; 
        }  
        return sign*(int)ans;
    }
};