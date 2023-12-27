void insertAtBottom(stack<int>& s, int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }

    int num=s.top();
    s.pop();

    insertAtBottom(s,x);
    s.push(num);

} 


void reverseStack(stack<int> &stack) {
    // Write your code here\

    if(stack.empty())
    {
        return;
    }

    int num=stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, num);
    

}
