class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.length(),m=t.length();
        stack<char>s1,s2;
        for(int i=0;i<n;i++){
            if(s1.empty()&&s[i]=='#') continue;
            else if(s[i]=='#') s1.pop();
            else s1.push(s[i]);
        }
        for(int j=0;j<m;j++){
            if(s2.empty()&&t[j]=='#') continue;
            else if(t[j]=='#') s2.pop();
            else s2.push(t[j]);
        }
        if(s1.size()!=s2.size()) return false;
        while(!s1.empty()){
            if(s1.top()!=s2.top()) return false;
            s1.pop();s2.pop();
        }
        return true;
    }
};