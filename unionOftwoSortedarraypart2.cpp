#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter a size: ";
    cin >> n;

    int m;
    cout << "enter b size: ";
    cin >> m;

    vector<int> a(n);
    vector<int> b(m);

    set<int> c;

    cout << "enter a values: ";
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
        c.insert(a[i]);
    }

    cout << "enter b values: ";
    for (int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
        c.insert(b[i]);
    }

    vector<int> y(c.begin(), c.end());

    for (int x : y)
    {
        cout << x << " ";
    }

    

    return 0;
}