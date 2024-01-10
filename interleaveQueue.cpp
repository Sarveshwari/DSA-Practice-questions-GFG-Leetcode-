class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        
        stack<int>s;
        vector<int>ans;
        int n=q.size();
        int i=0;
        int k=0;
        int l=0;
        while(i<n/2)
        {
            int val=q.front();
            s.push(val);
            q.pop();
            i++;
        }
        
        while(!s.empty())
        {
            int val=s.top();
            q.push(val);
            s.pop();
        }
        
        while(k<n/2)
        {
            int val=q.front();
            q.push(val);
            q.pop();
            k++;
        }
        
        while(l<n/2)
        {
            int val=q.front();
            s.push(val);
            q.pop();
            l++;
        }
        
        while(!s.empty())
        {
            int val=s.top();
            s.pop();
            q.push(val);
            val=q.front();
            q.pop();
            q.push(val);
            
        }
        
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        
        return ans;
        
    }
};
