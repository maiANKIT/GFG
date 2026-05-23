#include <bits/stdc++.h>

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

    int count = 1;
    int a = 1;

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i + 1] > arr[i])
        {
            count++;
        }
        else if(arr[i] == arr[i+1]){
            
        }
        else
        {
            break;
        }
    }

    return 0;
}