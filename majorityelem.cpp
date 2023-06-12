int majorityElement(int a[], int size)
    {
        
        // your code here
        int res=0, count=0;
        
        for(int i=0; i<size; i++)
        {
            if(count==0)
            {
                count=1;
            res=a[i];
            }
            else if(a[i]==res)
            count++;
            else
            count--;
        }
        
        count=0;
        for(int i=0; i<size; i++)
        {
            if(res==a[i])
            count++;
        }
        
        if(count>size/2){
            return res;
        }
        else{
          return -1;  
        }
