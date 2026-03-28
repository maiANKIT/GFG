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

    int target;
    cout << "enter target: ";
    cin >> target;

    sort(arr.begin(), arr.end());
    int sum = 0;
    int i = 0;
    int j = arr.size() - 1;
    bool x = 0;

    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum == target){
            x = 1;
            break;
        }
        else if(sum > target){
            j--;
        }
        else{
            i++;
        }
    }

    cout << "x: " << x;

    return 0;
}