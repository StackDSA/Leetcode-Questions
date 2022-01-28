class Solution {
public:
    string reverseWords(string s) {
        string a;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                while(!st.empty()){
                    a.push_back(st.top());
                    st.pop();
                }
                a.push_back(s[i]);
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            a.push_back(st.top());
            st.pop();
        }
        return a;
    }
};