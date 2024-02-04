class Solution {
public:
    bool isPalindrome(string s) {

        string str= "";

        /* without using in-built function
        for(int i =0 ; i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            {
                str=str+s[i];
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                str =str + char(s[i]+32); 
            }
        }*/
      
        for(int i =0 ; i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                str+=tolower(s[i]);
            }
            
        }

        int j = str.length()-1, i=0;
        
        while(i<j)
        {
            if(str[i] != str[j])
            {
                return false;
            }
            i++;
            j--;
        }
      
         return true;
    }
   
};
