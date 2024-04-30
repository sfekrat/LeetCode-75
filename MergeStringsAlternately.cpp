class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int i = 0, j = 0, k = 0;
        int b = max(word1.size(), word2.size());
        for(; i < b; i++) {
            if(j < word1.size())
                str.push_back(word1[j++]);
            if(k < word2.size())
                str.push_back(word2[k++]);
        }
        return str;
    }
};
