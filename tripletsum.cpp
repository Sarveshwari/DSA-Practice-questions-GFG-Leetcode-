//Function to find if there exists a triplet in the array A[] which sums up to X.

    bool find3Numbers(int A[], int n, int X)
    {
       sort(A, A+n);
       
       for(int i=0; i<n; i++)
       {
           int low=i+1; 
           int high=n-1;
           int y=X-A[i];
           while(low<high)
           {
                if(A[low]+A[high]==y)
           return 1;
           
           else if(A[low]+A[high]>y)
           high--;
           
           else
           low++;
               
           }
       }
       
       return 0;
    }


