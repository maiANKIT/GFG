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

    int temp = 1;
    int x = arr[arr.size() - 1];

    for (int i = arr.size() - 1; i >= 0; i--)
    {

        if (i >= 1)
        {
            temp = arr[i - 1];
            cout << "case2a " << "value of temp: " << temp << " " << endl;
        }

        if (i <= 0)
        {
            // temp = arr[arr.size() - 1];
            arr[0] = x;
            cout << "case1" << endl;
        }
        else if (i > 0)
        {
            cout << "case2b" << "value of temp: " << temp << endl;
            arr[i] = temp;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}