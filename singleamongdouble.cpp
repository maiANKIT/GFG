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

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    int x = -1;

    if(n == 1){
        
    }
    while (i < n - 1)
    {

        if (arr[i] == arr[i + 1])
        {
            i = i + 2;
        }
        else if (arr[i] != arr[i + 1])
        {
            x = arr[i];
            break;
        }

        if (x == -1 && i == n - 1)
        {
            x = arr[n - 1];
            break;
        }
    }

    cout << x;

    return 0;
}