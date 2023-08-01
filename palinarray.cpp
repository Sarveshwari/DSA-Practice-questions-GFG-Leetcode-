
    int PalinArray(int a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            int temp = a[i];
            int rev = 0;
            int r;

            while (temp > 0)
            {
                r = temp % 10;
                temp = temp / 10;
                rev = rev * 10 + r;
            }

            if (rev != a[i])
                return 0;
        }
        return 1;
    }
