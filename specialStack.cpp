class SpecialStack {

    stack<int>s;
    int mini;

    public:
        
    void push(int data) {
        // Implement the push() function.
        if(s.empty())
        {
            s.push(data);
            mini=data;
        }
        else
        {
            if(data>mini)
            {
                s.push(data);
            }
            else
            {
                s.push(2*data-mini);
                mini=data;
            }
        }
    }

    void pop() {
        // Implement the pop() function.
        // if(s.empty())
        // {
            
        // }
        int curr=s.top();
        // s.pop();

        if(curr>mini)
        {
            // return curr;
            s.pop();
        }
        else
        {
            int prevMin=mini;
            int val=(2*mini)-curr;
            mini=val;
            // return prevMin;
            s.pop();
        }
    }

    int top() {
        // Implement the top() function.
        if(s.empty())
        {
            return -1;
        }
        else
        {
            int curr=s.top();
            if(curr<mini)
            {
                return mini;
            }
            else{
                return curr;
            }

        }
    }

    int getMin() {
        // Implement the getMin() function.
        if(s.empty())
        {
            return -1;
        }

        return mini;
    }  
};
