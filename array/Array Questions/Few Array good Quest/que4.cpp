//linear search
#include <iostream>
using namespace std;
int LinearSearch(int n,int key,int arr[]){

    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        } 
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cin>>key;

    cout<<LinearSearch(n,key,array);
    return 0;
}