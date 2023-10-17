#include <iostream>
#include <string>
#include <set>

using namespace std;

string solve(string word)
{
    set<char> uniqueChars;
    for (char c : word)
    {
        uniqueChars.insert(c);

    }
    
    if (uniqueChars.size() % 2 == 0)
    {
        return "CHAT WITH HER!";
    }
    else
    {
        return "IGNORE HIM!";
    }
}

int main()
{
    string word;
    cin >> word;
    string result = solve(word);
    cout << result << endl;
    return 0;
}