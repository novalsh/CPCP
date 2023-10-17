#include <iostream>
#include <string>
using namespace std;

string abbreviate(string word) {
    if (word.length() > 10) {
        return word[0] + to_string(word.length() - 2) + word.back();
    } else {
        return word;
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        string word;
        getline(cin, word); 

        string abbreviated_word = abbreviate(word);
        cout << abbreviated_word << endl;
    }

    return 0;
}
