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
    cout << "enter size: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= 0)
        {
            positive.push_back(arr[i]);
        }
        else
        {
            negative.push_back(arr[i]);
        }
    }

    int j = 0;
    int k = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (j < positive.size() && i % 2 == 0)
        {
            arr[i] = positive[j];
            j++;
        }
        else if (k < negative.size() && i % 2 != 0)
        {
            arr[i] = negative[k];
            k++;
        }
        else
        {
        }
    }

    cout << "values: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}