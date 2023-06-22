//find median

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		   int n=v.size();
		   int median;
		   sort(v.begin(), v.end());
		   
		   if(n%2==0)
		   {
		       n=n-1;
		       median = (v[n/2]+v[(n/2)+1])/2;
		   }
		   else
		   {
		       n=n-1;
		       median = v[(n+1)/2];
		   }
		   
		   return median;
		}
};
