#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string a;
    cin >> a;
    string b = "";

    for (int i = a.length() - 1; i >= 0; i--)
    {
        b += a[i];
    }

    if ( a == b){
        cout << "Palindrome" << endl;
    } else{
        cout << "Bukan Palindrome" << endl;

    }

    cout << "String Awal : " << a << endl;
    cout << "String Terbalik : " << b << endl;
}