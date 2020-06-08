06.08 5:34 PM
Spread
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a1[n], cost1 = 0, v1[n] = {0}, n1, n2;
    for (int i = 0; i < n; i++)
        cin >> a1[i];

    for (int i = 0; i < k; i++)
    {
        cin >> n1 >> n2;
        if (v1[n1 - 1] == 0 && v1[n2 - 1] == 0)
        {
            if (a1[n1 - 1] > a1[n2 - 1])
            {
                cost1 += a1[n2 - 1];
            }
            else
            {
                cost1 += a1[n1 - 1];
            }
            v1[n1 - 1] = 1;
            v1[n2 - 1] = 1;
        }
        else
        {
            if (v1[n2 - 1] == 0 && v1[n1 - 1] == 1)
                v1[n2 - 1] = 1;
            else
                v1[n1 - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v1[i] == 0)
        {
            cost1 += a1[i];
        }
    }
    cout << cost1;
    return 0;
}
