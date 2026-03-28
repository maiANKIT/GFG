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

    int x = 0;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            x = arr[i];
            arr.erase(arr.begin() + i);
            break;
        }
    }

    int y = 0;

    for (int i = 0; i < arr.size(); i++)
    {

        if(arr[i] != i + 1){
            y = i+1;
            break;
        }
        
    }

    if(y == 0) y = n;

    cout << x << " " << y;

    return 0;
}