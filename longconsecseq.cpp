// arr[] : the input array
// N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        unordered_set<int>s;
        
        for(int i=0; i<N; i++)
        {
            s.insert(arr[i]);
        }
        
        int ans=0;
        
        for(int i=0; i<N; i++)
        {
            if(s.find(arr[i]-1)!=s.end())
            continue;
            
            else
            {
                int count=0;
                int current=arr[i];
                
                while(s.find(current)!=s.end())
                {
                    count++;
                    current++;
                }
                
                ans=max(ans, count);
            }
        }
        
        return ans;
    }
