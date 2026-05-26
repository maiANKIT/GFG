#include <bits/stdc++.h>

using namespace std;

int main()
{

    int sizeA;
    cout << "enter size of A: ";
    cin >> sizeA;

    int sizeB;
    cout << "enter size of B: ";
    cin >> sizeB;

    vector<int> a(sizeA);
    cout << "enter values of A: ";
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    vector<int> b(sizeB);
    cout << "enter values of B: ";
    for (int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0;
    int j = 0;

    vector<int> s;

    while (i < a.size() && j < b.size())
    {

        if (a[i] == b[j])
        {

            i++;
            j++;
        }
        else if (a[i] > b[j])
        {
            
            j++;
        }
        else
        {
            s.push_back(a[i]);
            i++;
        }
    }

    if (a[a.size() - 1] != b[b.size() - 1])
        s.push_back(a[a.size() - 1]);

    for (int i = 0; i < s.size(); i++)
    {

        cout << s[i] << " ";
    }

    return 0;
}