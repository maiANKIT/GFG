#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int d;
    cout << "ente d: ";
    cin >> d;

    d = d % arr.size();

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + arr.size() - d);
    reverse(arr.begin() + arr.size() - d, arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}