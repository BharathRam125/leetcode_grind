//https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
    stack<int> normal; //normal stack
    stack<int> reversed; //reversed stack  

    MyQueue() {
         
    }
    
    void push(int x) {
        normal.push(x);
    }
    
    int pop() {
         if(reversed.empty())
        {
            while(!normal.empty())
            {
                reversed.push(normal.top());
                normal.pop();
            }
        }
        
        int top = reversed.top();
        reversed.pop();
            
        return top;
    }
    
    int peek() {
         if(reversed.empty())
        {
            while(!normal.empty())
            {
                reversed.push(normal.top());
                normal.pop();
            }
        }
        
        return reversed.top();
    }
    
    bool empty() {
        return normal.empty() & reversed.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
