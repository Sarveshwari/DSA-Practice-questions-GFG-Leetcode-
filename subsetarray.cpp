string isSubset(int a1[], int a2[], int n, int m)
{

    unordered_map<int, int> k;

    for (int i = 0; i < n; i++)
    {
        k[a1[i]]++;
    }

    int flag = 0;

    for (int j = 0; j < m; ++j)
    {
        if (k.find(a2[j]) != k.end())
        {
            k[a2[j]]--;
            if (k[a2[j]] == 0)
                k.erase(a2[j]);

            continue;
        }

        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}