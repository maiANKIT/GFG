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
    cout << "enter the value: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    bool x = 1;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr.size() > 1 && arr[i] > arr[i + 1])
        {
            x = 0;
            break;
        }
        else if (arr.size() == 1)
        {
            break;
        }
    }

    cout << "ans: " << x;

    return 0;
}