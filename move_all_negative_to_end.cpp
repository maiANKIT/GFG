#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swaping(vector<int> &arr, int a, int x)
{

    for (int i = x + 1; i < arr.size(); i++)
    {
        if (arr[i] < 0 && arr[i + 1] >= 0)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    cout << "enter value: ";
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size() - 1; i++)
    {
        swaping(arr, arr[i], i);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}