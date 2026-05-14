#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> arr1(n), arr2(n);

    cout << "enter value of arr1: ";
    for (int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }

    cout << "enter value of arr2: ";
    for (int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
    }

    int sum = 0;
    vector<int> final(2 * arr1.size());

    for (int i = 0; i < n; i++)
    {

        if (i < n)
            final[i] = arr1[i];
    }

    for (int i = 0; i < n; i++)
    {

        if (i < n)
            final[n + i] = arr2[i];
    }

    sort(final.begin(), final.end());

    cout<<"values of final: ";
    for(int i = 0; i<final.size(); i++){
        cout<<final[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < final.size(); i++)
    {
        if (i == n - 1)
        {
            sum = final[i] + final[i + 1];
            break;
        }
    }

    cout << "final sum: " << sum << endl;

    return 0;
}