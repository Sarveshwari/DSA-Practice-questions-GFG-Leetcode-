void swap(int &x, int &y)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
    void sort012(int a[], int n)
    {
        int l=0, m=0, h=n-1;
        
        while(m<=h)
        {
            if(a[m]==0)
            {
                swap(a[l], a[m]);
                l++;
                m++;
            }
            else if(a[m]==1)
            {
                m++;
            }
            else{
                swap(a[m], a[h]);
                h--;
            }
        }
   
    }
