#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;
    for(int i; i < x ; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;

        if(a + b == c){
            cout << "YES";
        }else if(a + c == b){
            cout << "YES";
        }else if(b + c == a){
            cout << "YES";
    }else{
        cout << "NO";
    }
    cout << endl;
    }

    return 0;
}

