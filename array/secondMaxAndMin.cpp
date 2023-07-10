// 3 Appraoches
// 1 sort
// 2 two iterations over the array
// 3 make 4 variables and get second largest and smallest in one go by comparing effectively.

//apprach 3
 #include<bits\stdc++.h>
 using namespace std;
 
 int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    int largest = INT_MIN;
    int second_largest = arr[0];

    int smallest = INT_MAX;
    int second_smallest = arr[0];

    for (int i = 0; i < n; i++)
    {   
        
        if(largest < arr[i]){
            second_largest = largest;
            largest = arr[i];
        }
        //agar koi aur arr[i] bada hua jo largest se chota hai pr second largest se bada hai
        else if(arr[i] > second_largest && arr[i] != largest){ //&& condition to remove same large elements
            second_largest = arr[i];
        }

        if(smallest > arr[i]){
            second_smallest = smallest;
            smallest = arr[i];
        }else if(second_smallest > arr[i] && arr[i] != smallest){
            second_smallest = arr[i];
        }
    }
    cout<<second_largest<<"   "<<second_smallest<<endl;

    
    delete []arr;
    return 0;
 }