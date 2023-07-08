
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {

        sort(a.begin(), a.end());

        long long mindiff = INT_MAX, mini = 0;

        for (int i = 0; (i + m - 1) < n; i++)
        {
            mini = a[i + m - 1] - a[i];
            mindiff = min(mindiff, mini);
        }

        return mindiff;
    }
