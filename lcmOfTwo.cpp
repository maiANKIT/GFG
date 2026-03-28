#include <iostream>

using namespace std;

int main()
{

    int a;
    cout << "enter a: ";
    cin >> a;

    int b;
    cout << "enter b: ";
    cin >> b;

    int count = 1;
    // for (int i = 2; a > 1 || b > 1; i++)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         count = count * i;
    //         a = a / i;
    //         b = b / i;
    //     }
    //     else if (a % i == 0)
    //     {
    //         count = count * i;
    //         a = a / i;
    //     }
    //     else if (b % i == 0)
    //     {
    //         count = count * i;
    //         b = b / i;
    //     }
    // }

    int i = 2;

    while(a>1 || b>1){
        if (a % i == 0 && b % i == 0)
        {
            count = count * i;
            a = a / i;
            b = b / i;
        }
        else if (a % i == 0)
        {
            count = count * i;
            a = a / i;
        }
        else if (b % i == 0)
        {
            count = count * i;
            b = b / i;
        }
        else{
            i++;
        }
    }

    cout << count;

    return 0;
}