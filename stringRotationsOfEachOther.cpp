#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1;
    cin >> s1;

    string s2;
    cin >> s2;

    bool x = 0;

    string conc = s1 + s1;

    x = conc.find(s2) != string::npos;

    cout << x;

    return 0;
}