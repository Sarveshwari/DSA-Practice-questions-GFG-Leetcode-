class Solution 
{
    private:
    
    bool knows(vector<vector<int> >& M, int a, int b)
    {
        if(M[a][b]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>s;
        for(int i=0; i<n; i++)
        {
           s.push(i); 
        }
        
        
        while(s.size()>1)
        {
            
            int a = s.top();
            s.pop();
            int b=s.top();
            s.pop();
        
            if(knows(M,a,b))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        
        int candidate=s.top();
        
        bool rowCheck=false;
        int zerocount=0;
        
        for(int i=0; i<n; i++)
        {
            if(M[candidate][i]==0)
            {
                zerocount++;
            }
        }
        
        if(zerocount==n)
        {
            rowCheck=true;
        }
        
        bool columnCheck=false;
        int onecount=0;
        
        for(int i=0; i<n; i++)
        {
             if(M[i][candidate]==1)
            {
                onecount++;
            }
            
        }
        
        if(onecount==n-1)
        {
            columnCheck=true;
        }
        
        if(rowCheck==true && columnCheck==true)
        {
            return candidate;
        }
        else
        {
            return -1;
        }
        
    }
};
