// butterfly pattern

#include <iostream>
using namespace std;

int main()
{
    int given;
    cin >> given;
    int n = 2 * given;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= given)
            {
                if (j <= i || j >= n - i + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                if (j <= n - i + 1 || j >= i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    //alter
    // for (int i = 1; i <= given; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     int space = 2*given-2*i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for (int i = given; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     int space = 2*given-2*i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    

    return 0;
}