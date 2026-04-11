#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter value: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {

        if (i < arr.size() - 1)
        {
            swap(arr[i], arr[i + 1]);
            i++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}