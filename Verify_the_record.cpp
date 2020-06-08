06.08 5:21 PM
Record
#include <bits/stdc++.h>

using namespace std;

int main()
{

    std::vector<int>::iterator ite;
    std::vector<int> vec;
    std::vector<int> wait;

    int a;
    int ser;

    vec.push_back(1);
    vec.push_back(2);
    wait.push_back(3);

    cin >> a;

    while (a--)
    {
        cin >> ser;

        ite = std::find(vec.begin(), vec.end(), ser);
        if (ite != vec.end())
        {
            if (ite - vec.begin() == 0)
            {
                int temp = vec.back();
                vec.pop_back();
                vec.push_back(wait[0]);
                wait.pop_back();
                wait.push_back(temp);
            }
            else
            {
                int t = vec[0];
                vec[0] = wait[0];
                wait.pop_back();
                wait.push_back(t);
            }
            continue;
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}
