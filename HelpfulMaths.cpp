#include <stdio.h>
#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    string a;
    
        string res;
    cin >> a;
    sort(a.begin(), a.end());          
a.erase(remove(a.begin(), a.end(), '+'), a.end()); 

for (int i = 0; i < a.size(); i++)
{
    res += a[i];
    if (i + 1 < a.size()) res += '+';
}    
        cout << res << endl;
}