#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    int x = -1;
    for (int i = n + 1;; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i > j && i % j == 0)
            {
                break;
            }
            else if (j == i)
            {
                x = i;
                break;
            }
        }
        if (x == i)
        {
            break;
        }
    }

    cout << x;

    return 0;
}