#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    cin >> x;

    string a = "I hate it || I love it";

    int countHate = 0;
    int countLove = 0;

    for (char c : a)
    {
        if (c == 'h')
        {
            countHate++;
        }
        else if (c == 'l')
        {
            countLove++;
        }
    }

    if (x % 2 == 0)
    {
        cout << "I love it" << endl;
    }
    else
    {
        cout << "I hate it" << endl;
    }
}