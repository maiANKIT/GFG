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
    cout << "enter values: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int k = 1;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[arr.size() - 1] <= 0)
        {
            cout << "k: " << 1;
            break;
        }

        if (arr[i] < 0)
        {
            continue;
        }
        else if (arr[i] == k)
        {
            k++;
        }
        else if (arr[i] > k)
        {
            cout << "k: " << k;
            break;
        }
    }

    return 0;
}