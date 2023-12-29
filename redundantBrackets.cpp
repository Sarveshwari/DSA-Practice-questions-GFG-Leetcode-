#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>x;

    for(int i=0; i<s.length(); i++)
    {
        char ch=s[i];
        if(ch=='('|| ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            x.push(ch);
        }
        else
        {
            bool isRedundant=true;
    

            if(ch==')')
            {
                while(x.top()!='(')
            {
                char top=x.top();
                if(top=='+'||top=='-'||top=='*'||top=='/')
                {
                    isRedundant=false;
                }

                x.pop();
            }

            if(isRedundant==true)
            {
                return true;
            }
            x.pop();
        }

        }

    
    }
       return false;
}
