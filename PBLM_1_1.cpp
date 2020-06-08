#include <iostream>
using namespace std;

int res(int n)
{
    int deno[] = { 1, 5, 10, 20, 100 };
    int c=0;
    for (int i = 4; i >= 0; i--)
    {
        while (n >= deno[i])
        {
            n -= deno[i];
            c++;
        }
    }
    return c;
}
int main()
{
    int n[50],t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n[i];
    }
    for(int i=0;i<t;i++)
    {
        cout<<res(n[i])<<endl;
    }
    return 0;
}
