class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        int l = 0;
        int r = s.size() - 1;
        while(l < r) {
            if(vowels.contains(s[l]) and vowels.contains(s[r])) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            if(!vowels.contains(s[l]))
                l++;
            if(!vowels.contains(s[r]))
                r--;
        }
        return s;
    }
};
