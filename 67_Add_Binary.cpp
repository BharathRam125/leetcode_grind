//https://leetcode.com/problems/add-binary/description/
class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.length()-1;
        int m = b.length()-1;
        int carry = 0;
        string result;
        while(n>=0 || m>=0 || carry)
        {
            if(n>=0)  carry += a[n--] -'0';
            if(m>=0)  carry += b[m--] -'0';
            char c = carry % 2 +'0';
            result = c + result;
            carry /= 2;
        }
        return result;
    }
};
