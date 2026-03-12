#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    vector<int> arr2;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0)
        {
            arr2.push_back(arr[arr.size() - 1]);
        }
        else
        {
            arr2.push_back(arr[i - 1]);
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = arr2[i];
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}