#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    int hurufkecil = 0;
    int hurufbesar = 0;

    for (char c : word) {
        if (islower(c)) {
            hurufkecil++;
        } else if (isupper(c)) {
            hurufbesar++;
        }
    }

    if (hurufkecil >= hurufbesar) {
        for (char c : word) {
            cout << char(tolower(c));
        }
    } else {
        for (char c : word) {
            cout << char(toupper(c));
        }
    }

    return 0;
}
