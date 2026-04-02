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
   cout << "enter size: ";
   for (int i = 0; i < arr.size(); i++)
   {
      cin >> arr[i];
   }

   vector<int> s = arr;

   sort(arr.begin(), arr.end());
   int y = 0;

   for (int i = 0; i < arr.size(); i++)
   {

      bool x = binary_search(arr.begin(), arr.end(), arr[i]);

      if (x == 1)
      {
         cout << "x: " << x << endl;
         cout << "i: " << i << endl;
         y = i;
         break;
      }
   }

   cout << y;

   return 0;
}