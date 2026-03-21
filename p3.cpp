#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int x = 0;

    if (n > 2)
    {
        for (int j = 1;; j++)
        {
            for (int i = 2; i < j; i++)
            {
                if ((n + j) % i == 0)
                {
                    x = n + j;
                    break;
                }
            }

            if (x != 0)
            {
                break;
            }
        }
    }
    else if (n <= 2)
    {
        x = 3;
    }

    cout << x - 1;

    return 0;
}