class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        queue<int>revQueue;
        int n=q.size();
        int arr[n];
        
        for(int i=n-1; i>=0; i--)
        {
            arr[i]=q.front();
            q.pop();
        }
        for(int i=0; i<n; i++)
        {
            revQueue.push(arr[i]);
        }
        
        return revQueue;
    }
};
