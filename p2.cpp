#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swapping(vector<int> &arr)
{

    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[j] < 0)
        {
            if (i != j)
            {
                swap(arr[j], arr[i]);
            }
            j++;
        }
    }
}

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {

        cin >> arr[i];
    }

    swapping(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}