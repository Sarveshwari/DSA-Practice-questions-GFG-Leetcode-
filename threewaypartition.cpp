class Solution
{
public:
    // Function to partition the array around the range such that array is divided into three parts.

    // Dutch Flag Algorithm Approach ( used whenever an array is to be partitioned.)

    void threeWayPartition(vector<int> &array, int a, int b)
    {
        int start = 0;
        int end = array.size() - 1;
        int i = 0;

        while (i <= end)
        {
            if (array[i] < a)
            {
                swap(array[i], array[start]);
                i++;
                start++;
            }
            else if (array[i] > b)
            {
                swap(array[i], array[end]);
                end--;
            }
            else
            {
                i++;
            }
        }
    }
};
