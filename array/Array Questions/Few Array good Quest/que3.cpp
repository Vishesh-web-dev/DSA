//kids with the grestest candies
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int candies[n];
    for (int i = 0; i < n; i++)
    {
        cin>>candies[i];
    }
    int extracandies ;
    cin>>extracandies;

    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max<candies[i])
        {
            max = candies[i];
        }
        
    }

    bool array[n];

    for (int i = 0; i < n; i++)
    {
        if (max<= candies[i] + extracandies)
        {
            array[i] = true;
        }else
        {
            array[i] = false;
        }
        
        cout<<array[i]<<" ";
    }
        
    return 0;
}