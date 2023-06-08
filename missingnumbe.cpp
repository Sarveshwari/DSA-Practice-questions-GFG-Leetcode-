  int missingNumber(vector<int>& array, int n) {
        
        int totalsum=(n*(n+1))/2;
        int sum=0;
        
    for(int i=0; i<array.size(); i++)
    {
        sum+=array[i];
    }
    
    return (totalsum-sum);
    }
