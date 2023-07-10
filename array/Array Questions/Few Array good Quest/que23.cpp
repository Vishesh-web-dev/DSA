//PAIR SUM PROBLEM
//cheak if there exist two element inan array such that their sum is equal to given k
//optimised approach

#include <iostream>
using namespace std;

int main()
{   int n = 8; // size of array
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;

    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            cout << "yes";
            return 0;
        }

        else if (arr[low] + arr[high] < k)
        {
            low++;
        }

        else
        {
            high--;
        }
    }

    cout << "no pairs";

    return 0;
}