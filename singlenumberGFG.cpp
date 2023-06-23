int getSingle(int arr[], int n) {
	    // code here
	    
	    map<int, int>m;
	    int flag=0;
	    
	    for(int i=0; i<n; i++)
	    {
	        m[arr[i]]++;
	    }
	    
	    for(auto it=m.begin(); it!=m.end(); it++)
	    {
	        if((it->second %2) != 0)
	        return it->first;
	        flag=1;
	    }
	    
	    if(flag==0)
	    return 0;
	    
	    return 0;
	}
