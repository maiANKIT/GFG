#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter size: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "enter k: ";
    cin >> k;

    int x = 0;

    if (k > arr.size())
        reverse(arr.begin(), arr.end());
    else
    {

        while (x < arr.size())
        {

            reverse(arr.begin() + x, arr.begin() + min(x + k, (int)arr.size()));

            x = x + k;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}