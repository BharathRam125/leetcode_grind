//https://leetcode.com/problems/longest-palindrome/description/

class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char,int> freq;
        int result = 0;
        int n = s.size();

        for(char c: s)
        {
            freq[c]++;
        }
        
        for(auto c:freq)
        {
            if(c.second > 1)
            {
                result = result + c.second - (c.second % 2);
            }
        }
        if(result < n) result+=1;
        return result;
    }
   
};
