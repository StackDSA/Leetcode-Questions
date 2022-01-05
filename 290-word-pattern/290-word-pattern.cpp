class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m;
        int n=s.size(),x=pattern.size();
        int i=0;
        vector<string>v;
        string temp="";
        while(i<n){
            if(s[i]==' '){
                v.push_back(temp);
                temp="";
            }
            else{
                temp+=(s[i]);
            }
            i++;
        }
        v.push_back(temp);
        if(v.size()!=x) return false;
        set<string> st;// In case an already occured string matches with a new character, we keep a set
        for(int i=0;i<x;i++){
            if(m.find(pattern[i])!=m.end()){
                if(m[pattern[i]]!=v[i]) return false;
            }
            else{
                if(st.count(v[i]) > 0){ //Count function returns 1 if an element already exists in a set. Else returns 0
					return false;
				}
				m[pattern[i]] = v[i];
                st.insert(v[i]);
            }
        }
        return true;
    }
};