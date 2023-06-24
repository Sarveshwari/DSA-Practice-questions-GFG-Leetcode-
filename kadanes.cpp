
long long maxSubarraySum(int arr[], int n){
        
        long long sum=0;
        long long maxi=arr[0];
        
        for(int i=0; i<n; i++)
        {
            sum=sum+arr[i];
            
            maxi=max(sum,maxi);
            
            if(sum<0)
            sum=0;
        }
        
        return maxi;
        
    }
