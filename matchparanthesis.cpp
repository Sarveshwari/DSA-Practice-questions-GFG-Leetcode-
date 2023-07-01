bool ispar(string x)
    {
       
        stack<char>s;
        
        for(int i=0; i<x.length(); i++)
        {
            if(s.empty())
            {
                s.push(x[i]);
            }
            else if((s.top() == '(' && x[i] == ')')||(s.top() == '[' && x[i] == ']')||(s.top()=='{' && x[i]=='}'))
            {
                s.pop();
            }
            else{
                s.push(x[i]);
            }
        }
        
        if(s.empty())
        return true;
        else
        return false;
    }
