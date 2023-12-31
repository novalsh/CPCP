#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int x;
    int z=0;
    cin >> x;

   for(int y=0; y<x; y++){
    int a,b,c;
    cin >> a >> b >> c;

    if(a+b+c >= 2){
        z++;
    }   
   }   
   cout << z << endl;
    return 0;
}