#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n1, n2, n3;
    cout << "enter n: ";
    cin >> n1 >> n2 >> n3;

    vector<int> arr1(n1), arr2(n2), arr3(n3);
    cout << "enter values(n1): ";
    for (int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }

    cout << "enter values(n2): ";
    for (int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
    }

    cout << "enter values(n3): ";
    for (int i = 0; i < arr3.size(); i++)
    {
        cin >> arr3[i];
    }

    set<int> a1;
    for (int i = 0; i < arr1.size(); i++)
    {
        a1.insert(arr1[i]);
    }

    set<int> a2;
    for (int i = 0; i < arr2.size(); i++)
    {
        a2.insert(arr2[i]);
    }

    set<int> a3;
    for (int i = 0; i < arr3.size(); i++)
    {
        a3.insert(arr3[i]);
    }

    map<int, int> nums;
    for (auto it: a1)
    {
        nums[it]++;
    }

    for (auto it: a1)
    {
        nums[it]++;
    }

    for (auto it: a1)
    {
        nums[it]++;
    }

    vector<int> x;

    for (auto i : nums)
    {
        if (i.second == 3)
        {
            x.push_back(i.first);
        }
    }

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}