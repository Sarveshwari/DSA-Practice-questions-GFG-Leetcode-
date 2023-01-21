class Solution
{
public:
    double MedianOfArrays(vector<int> &array1, vector<int> &array2)
    {

        if (array1.size() > array2.size())
            return (MedianOfArrays(array2, array1));

        int n1 = array1.size();
        int n2 = array2.size();
        int lo = 0, hi = n1;

        while (lo <= hi)
        {
            int cut1 = lo + (hi - lo) / 2;
            int cut2 = (n1 + n2) - cut1;

            int l1 = (cut1 == 0) ? INT_MIN : array1[cut1 - 1];
            int l2 = (cut2 == 0) ? INT_MIN : array2[cut2 - 1];
            int r1 = (cut1 == n1) ? INT_MAX : array1[cut1];
            int r2 = (cut2 == n2) ? INT_MAX : array2[cut2];

            if (l1 > r2)
            {

                hi = cut1 - 1;
            }

            else if (l2 > r1)
            {
                lo = cut1 + 1;
            }

            else
            {
                if ((n1 + n2) % 2 == 0)
                    return (double)((max(l1, l2) + min(r1, r2)) / 2);

                else
                    return (double)(min(r1, r2));
            }
        }

        return 0.0;
    }
};