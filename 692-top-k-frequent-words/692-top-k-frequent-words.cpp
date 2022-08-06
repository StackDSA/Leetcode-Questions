class Solution {
    bool static cmp(pair<int,string>&a,pair<int,string>&b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first>b.first;
    }
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        int n=words.size();
        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }
        vector<pair<int,string>>v;
        for(auto i: mp){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end(),cmp);
        vector<string>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};