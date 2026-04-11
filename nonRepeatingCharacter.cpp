#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "enter s: ";
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    cout << "value: ";
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    vector<char> x;

    for (auto i : mp)
    {
        if(i.second == 1) x.push_back(i.first);
    }

    for(int i = 0; i<s.size(); i++){
        
    }


    return 0;
}