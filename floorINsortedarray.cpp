#include <iostream>
#include <vector>
#include <string>
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

    int x;
    cout << "enter x: ";
    cin >> x;

    int index = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == arr.size() - 1 && arr[i] == x)
        {
            index = i;
            break;
        }

        if(arr[arr.size() - 1] < x){
            index = arr.size() - 1;
            break;
        }

        if (arr[i] > x)
        {
            index = i - 1;
            break;
        }
    }

    cout << index;

    return 0;
}