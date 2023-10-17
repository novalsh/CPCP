#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cin >> x;

    int y = x / 5;

    if (x % 5 != 0)
    {
        y++;
    }
    
    cout << y << endl;

    return 0;
}
