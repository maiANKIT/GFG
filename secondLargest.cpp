#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

    sort(arr.begin(), arr.end());

    int max = arr[arr.size() - 1];
    cout << "max: " << max << endl;
    int secondMax = -1;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] < max)
        {
            secondMax = arr[i];
            break;
        }
    }

    cout << arr[arr.size() - 2] << endl;
    cout << secondMax;

    return 0;
}