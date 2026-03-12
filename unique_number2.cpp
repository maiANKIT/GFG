#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

    sort(arr.begin(), arr.end());

    int x = -1;
    int y = -1;
    int count = 0;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            i++;
        }
        else
        {
            if (x == -1)
            {
                x = arr[i];
                cout << "case1" << endl;
            }
            else if (i + 2 < arr.size())
            {
                y = arr[i];
                cout << "case2" << endl;
                break;
            }
            else
            {
                y = arr[i + 1];
                cout << "case3" << endl;
                break;
            }
        }
    }

    cout << x << "," << y << endl;

    return 0;
}