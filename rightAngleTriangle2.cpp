#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i < n)
        {

            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i || j == n)
                    cout << "*";
                else
                    cout << " ";
            }

            cout << endl;
        }
        else
        {

            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
        }
    }

    return 0;
}