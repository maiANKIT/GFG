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

    int x;
    cout << "enter x: ";
    cin >> x;

    bool y = 0;

    int i = 0;
    int j = arr.size() - 1;

    sort(arr.begin(), arr.end());

    int n = arr.size();
    for(int i = 0; i<n; i++){
        if((arr[n - i -1] - arr[i]) <= x){
            x = 0;
            break;
        }
        else if((arr[n - i -1] - arr[i]) > x && )
    }

    cout << "y: " << y << endl;

    return 0;
}