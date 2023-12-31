#include <iostream>

using namespace std;

int main()
{
    int n, k, m;
    cin >> n >> k >> m;

    if (m % k == 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << m % n << endl;
    }
}