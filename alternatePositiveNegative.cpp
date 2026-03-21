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

        if (k >= negative.size())
        {
            cout << "case1" << endl;
            // j++;
            arr[i] = positive[j];
            j++;
        }
        else if (j >= positive.size())
        {
            cout << "case2" << endl;
            arr[i] = negative[k];
            k++;
        }
        else if (j < positive.size() && i % 2 == 0)
        {
            cout << "case3" << endl;
            arr[i] = positive[j];
            j++;
        }
        else if (k < negative.size() && i % 2 != 0)
        {
            cout << "case4" << endl;
            arr[i] = negative[k];
            k++;
        }
    }

    cout << "values: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}