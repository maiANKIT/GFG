#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter value: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size() / 2; i++)
    {
        swap(arr[i], arr[arr.size() - i - 1]);
    }

    return 0;
}