#include<iostream>
using namespace std;
// void selectionSort(int n,int a[]){
//     for (int i = 0; i < n-1; i++)
//     {
//       for (int j = i+1; j < n; j++)
//       {
//         if (a[j] < a[i])
//         {
//           int temp = a[i];
//           a[i] = a[j];
//           a[j] = temp;
//         }
//       }
//     }
//     for (int i = 0; i < n; i++)
//     {
//       cout<<a[i]<<" ";
//     }
    
// }
// void bubbleSort(int n,int a[]){
//   int counter = 1;
//   while (counter < n)
//   {
//     for (int i = 0; i < n-counter; i++)
//     {
//       if (a[i] > a[i+1])
//       {
//         int temp = a[i];
//         a[i] = a[i+1];
//         a[i+1] = temp; 
//       }
//     }
//     counter++;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     cout<<a[i]<<" ";
//   }
// }
// void insertionSort(int n,int a[]){
//   for (int i = 1; i < n; i++)
//   {
//     int curr = a[i];
//     int j = i-1;
//     while (a[j] > curr && j>=0)
//     {
//       j--;
//     }
    
//   }
  
// }

  int kadanesAlgo(int n,int arr[]){
    int maxSum = INT16_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
      currSum += arr[i];
      if (currSum < 0)
      {
        currSum = 0;
      }
      maxSum = max(currSum,maxSum);
    }
    return maxSum;
  }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }

    //max circular subarray sum
    

    cout<<kadanesAlgo(n,arr);
    // int sum = 0;
    // int maxSum = INT16_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //   for (int j = i; j < n; j++)
    //   {
    //     sum += arr[j];
    //     maxSum = max(maxSum,sum);
    //   }
    //   sum = 0;
    // }
    // cout<<maxSum;

    // for (int i = 0; i < n; i++)
    // {
    //   for (int j = i; j < n; j++)
    //   {
    //     for (int k = i; k <= j; k++)
    //     {
    //       cout<<arr[k]<<" ";
    //     }
    //     cout<<endl;
    //   }
      
    // }
    
    //kadane's algorithm

    
    // //min missing number
    // bool check[INT16_MAX];
    // for (int i = 0; i < INT16_MAX; i++)
    // { 
    //   check[i] = false;
    // }
    // int minNumb = INT32_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //   check[arr[i]] = true;
    //   minNumb = min(minNumb,arr[i]);
    // }
    // for (int i = minNumb; i < INT16_MAX; i++)
    // {
    //   if (check[i] == false)
    //   {
    //     cout<<i;
    //     return 0;
    //   }
      
    // }
    

    //first repeating element
    // int check[INT16_MAX];
    // for (int i = 0; i < INT16_MAX; i++)
    // { 
    //   check[i] = -1;
    // }
    // int minIndex = INT32_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //   if (check[arr[i]] != -1)
    //   {
    //     minIndex = min(minIndex,check[arr[i]]);
    //   }else
    //   {
    //     check[arr[i]] = i;
    //   }
    // }
    // cout<<minIndex;


    // int rbd = 0;
    // int maxprev = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //   if (i != 0)
    //   {
    //     maxprev = max(maxprev,arr[i-1]);
    //   }
    //   if (i == 0 && arr[i] >arr[i+1])
    //   {
    //     rbd++;
    //   }else if (arr[i] > arr[i+1] && arr[i] > maxprev)
    //   {
    //     rbd++
    //   }else if (i == n-1 && arr[i] > maxprev)
    //   {
    //     rbd++;
    //   }
    // }
    // cout<<rbd;


    // int ans = 2;
    // int sizeOfArithmeticArr = 2;
    // int d;
    // int pd = arr[1] - arr[0];
    // for (int i = 1; i < n; i++)
    // { 
    //   d = arr[i+1] - arr[i];
    //   if (d == pd)
    //   {
    //     ans++;
    //     sizeOfArithmeticArr = max(ans,sizeOfArithmeticArr);
    //   }else
    //   {
    //     ans = 2;
    //     pd = d;
    //   }
    // }
    // cout<<sizeOfArithmeticArr;
    return 0;
}