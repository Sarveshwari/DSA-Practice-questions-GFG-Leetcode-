long long int merge(long long int a[], long long int l,long long  int mid, long long int r)
    {
        long long int inv=0;
        long long int i=l;
        long long int j=mid+1;
        long long int k=0;
        long long int  temp[(r-l+1)];
        while((i<=mid) and (j<=r))
        {
            if(a[i]<=a[j])
            {
                temp[k++]=a[i++];
            }
            else{
                temp[k++]=a[j++];
                inv=inv+ (mid-i+1);
            }
        }
        while(i<=mid){
            temp[k++]=a[i++];
        }
        while(j<=r){
            temp[k++]=a[j++];
        }
        for(int i=l,k=0; i<=r; i++,k++)
        {
            a[i]=temp[k];
        }
        return inv;
        
    }
    long long int mergesort(long long int a[], long long int l, long long int r)
    {
        // Your Code Here
       long long int count=0;
      
       
       if(l<r)
       {
           long long int mid=(l+r)/2;
           count+=mergesort(a, l, mid);
           count+=mergesort(a, mid+1, r);
           count+=merge(a, l, mid, r);
           
       }
       return count;
    }
    
    long long inversionCount(long long int arr[], long long int N)
    {

        return mergesort(arr, 0, N-1);
    }
