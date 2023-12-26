bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char>st;

    for (int i = 0; i < s.length(); i++) {
      char ch = s[i];

         if(ch=='('||ch=='['|| ch=='{')
         {
             st.push(ch);
         }
         else{
             if (!st.empty()) {
               if (ch == ')' || ch == ']' || ch == '}')
               {
                   st.pop();
               }
               else{
                   return false;
               }
             }
             else
             {
                 return false;
             }
         }
    }

    if(st.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
