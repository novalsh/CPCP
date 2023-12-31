#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int result = 0;
    for (int i = 0; i < a; i++){
        int score;
        cin >> score;

        if (score > 0 && score > b){
            result++;
        }
    }
    cout << result << endl;
    return 0;
}