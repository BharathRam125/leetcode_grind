class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(char c: s)
        {
            if(c=='(' || c=='{'|| c=='[')
            {
                stack.push(c);
            }
            else
            {
                if(stack.empty())
                {
                    return false;
                }
                if(c==')')
                {
                    if(stack.top() != '(')
                    {
                        return false;
                    }
                }
                else if(c=='}')
                {
                    if(stack.top() != '{')
                    {
                        return false;
                    }
                }
                else if(c==']')
                {
                    if(stack.top() != '[')
                    {
                        return false;
                    }
                }
                stack.pop();
            }
        }
        if(stack.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
