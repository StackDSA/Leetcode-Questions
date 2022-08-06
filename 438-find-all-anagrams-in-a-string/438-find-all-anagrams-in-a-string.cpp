class Solution {
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
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        int n=p.length(),m=s.length();
        string a="";
        for(int i=0;i<n;i++){
            a.push_back(s[i]);
        }  
        int i=n;
        while(i<=m){
            if(isAnagram(a,p)) v.push_back(i-n);
            a.erase(0,1);
            a.push_back(s[i]);
            i++;
        }
        return v;
    }
};