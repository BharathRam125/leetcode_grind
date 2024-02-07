class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> sFreq;
        unordered_map<char,int> tFreq;
        
        for(char c:s)
        {
            sFreq[c]++;
        }
        for(char c:t)
        {
            tFreq[c]++;
        }

        return sFreq==tFreq;
    }
};
