class Solution{
  private: 
   vector<int> nextSmaller(int* arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    vector<int> prevSmaller(int* arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

   int largestRectangleArea(int* heights, int n) {

        vector<int> next(n);
        next = nextSmaller(heights, n);
        vector<int> prev(n);
        prev = prevSmaller(heights, n);

        int area = INT_MIN;

        for (int i = 0; i < n; i++) {
            int l = heights[i];
            if (next[i] == -1) {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;

            int newArea = l * b;

            area = max(area, newArea);
        }

        return area;
    }
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        
        int area =largestRectangleArea(M[0], m);
        
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if( M[i][j]!=0)
                {
                    M[i][j]=M[i][j]+M[i-1][j];
                }
                else
                {
                    M[i][j]=0;
                }
                
            }
            
             area=max(area, largestRectangleArea(M[i], m));
        }
        
        return area;
    }
};