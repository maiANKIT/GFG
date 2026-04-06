#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter values: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int x = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
        if (sum > x)
        {
            x = sum;
        }
        else if (sum + arr[i] < x)
        {
            sum = 0;
        }
    }

    cout << x;

    return 0;
}