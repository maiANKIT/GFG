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

    int size = arr.size();
    if (k < size)
    {
        int y = 0;
        int z = k;
        int x = arr.size() - 1;

        while (x > 0)
        {
            reverse(arr.begin() + y, arr.begin() + z);
            y = y + k;
            z = z + k;
            x = x - k;
        }

        reverse(arr.begin() + z, arr.end());
    }
    else if (k >= size)
        reverse(arr.begin(), arr.end());

    cout << "values: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}