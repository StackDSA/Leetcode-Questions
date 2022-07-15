class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        int maxR=0,sum=0,n=s.length(); 
        for(int i=n-1;i>=0;i--){
            if(mp[s[i]]>=maxR){
                sum+=mp[s[i]];
                maxR=mp[s[i]];
            }
            else if(mp[s[i]]<maxR){
                sum-=mp[s[i]];
            }
        }
        return sum;
    }
};