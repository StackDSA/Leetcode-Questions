class Solution {
    //Apart from brute force, we can store the max freq of each alphabet from words2 in a map and check whether the map[words1[i]] matches with this global map. We can do this using vector, map and multiset. I have used vectors.
public:
    bool compare(vector<int> word1, vector<int> word2) {
        for (int i = 0; i < 26; i++) {
            if (word2[i] > word1[i]) {
                return false;
            }
        }
        return true;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int m = words1.size();
        vector<vector<int>> word1Vec(m, vector<int> (26, 0));
        vector<int> maxWord2Vec(26, 0);
        vector<string> result;    
        for (int i = 0; i < words1.size(); i++) {
            for (int j = 0; j < words1[i].size(); j++) {
                word1Vec[i][words1[i][j]-'a']++;
            }
        }
        for (int i = 0; i < words2.size(); i++) {
            vector<int> word2vec(26, 0);
            for (int j = 0; j < words2[i].length(); j++) {
                word2vec[words2[i][j]-'a']++;
            }
            for(int j = 0; j < 26; j++) {
                maxWord2Vec[j] = max(maxWord2Vec[j], word2vec[j]);
            }
        }
        for (int i = 0; i < word1Vec.size(); i++) {
            if (compare(word1Vec[i], maxWord2Vec)) {
                result.push_back(words1[i]);
            }
        }
        return result;
    }
};