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

    cout << "enter a values: ";
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    cout << "enter b values: ";
    for (int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
    }

    vector<int> c;
    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size())
    {
        if (i > 1 && a[i] == b[j] && a[i] == a[i - 1] || b[j] == b[j - 1])
        {
            // c.push_back(a[i]);
            i++;
            j++;
            cout << "c1" << endl;
        }
        else if (j >= 1 && a[i] > b[j] && b[j] == b[j - 1])
        {
            j++;
            cout << "c5" << endl;
        }
        else if (i >= 1 && a[i] < b[j] && a[i] == a[i - 1])
        {
            i++;
            cout << "c6" << endl;
        }
        else if (a[i] == b[j])
        {
            cout << "c2" << endl;
            c.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] > b[j])
        {
            cout << "c3" << endl;
            c.push_back(b[j]);
            j++;
        }
        else if (a[i] < b[j])
        {
            cout << "c4" << endl;
            c.push_back(a[i]);
            i++;
        }
    }

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}