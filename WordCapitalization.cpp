#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if(isalpha(s[0])){
        s[0] = toupper(s[0]);
    }
    cout << s << endl;
}