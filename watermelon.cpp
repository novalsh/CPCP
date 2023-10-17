#include <iostream>
using namespace std;

int solve()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

int main()
{
    solve();
}