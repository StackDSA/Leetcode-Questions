class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.length()!=s.length()) return false;
        int hash[26]={0};
        for(int i=0;i<t.length();i++){
            hash[t[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            if(hash[s[i]-'a']==0) return false;
            hash[s[i]-'a']--;
        }
        return true;
    }
};