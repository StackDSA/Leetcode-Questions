class Solution {
    bool helper(string s,string t){
        map<char,char>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return false;
            }
            else  mp[s[i]]=t[i];
        }
        return true;
    }    
public:
    vector<string> findAndReplacePattern(vector<string>& words, string t) {
        int n=words.size();
        vector<string>ans;
        for(int i=0;i<n;i++){
            string s=words[i];
            if(helper(s,t) && helper(t,s)) ans.push_back(s);
        }
        return ans;
    }
};