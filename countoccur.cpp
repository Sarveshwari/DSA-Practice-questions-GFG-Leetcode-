class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        
    unordered_map<int, int> m;
    
    int count=0;
    int x=n/k;
    
    for(int i=0; i<n; i++)
    {
        m[arr[i]]++;
    }
    
    for(auto i : m)
    {
        if(i.second>x)
        count++;
    }
    
    return count;
    
    }
};