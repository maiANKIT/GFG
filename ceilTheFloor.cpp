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

    int x;
    cout<<"enter x: ";
    cin>>x;

    sort(arr.begin(), arr.end());

    int i = 0;

    for(i; i<arr.size(); i++){
        if(arr[i] >= x){
            break;
        }
    }

    int a = -1;
    int b = -1;

    if(i > 0 && i<arr.size(); ){
        a = 
    }

    

   return 0;
}