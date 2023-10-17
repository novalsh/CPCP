#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    cin >> x;
    string s = "A || D";
    cin >> s;

    int countA = 0;
    int countD = 0;

    for (char c : s)
    {
        if (c == 'A')
        {
            countA++;
        }
        else if (c == 'D')
        {
            countD++;
        }
    }

    if (countA > countD)
    {
        cout << "Anton" << endl;
    }
    if (countD > countA)
    {
        cout << "Danik" << endl;
    }
    if (countA == countD)
    {
        cout << "Friendship" << endl;
    }
}
