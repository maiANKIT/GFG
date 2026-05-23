#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"enter size: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"enter values: ";
    for(int i = 0; i<arr.size(); i++){

        cin>>arr[i];

    }

    int target;
    cout<<"enter target: ";
    cin>>target;

    sort(arr.begin(), arr.end());

    if(target < 0){



    }
    else if(target > 0){
        
    }

   return 0;
}