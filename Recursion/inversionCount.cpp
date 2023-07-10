int merge(int arr[],int s,int e){
    int cnt = 0;
    int mid = s + (e-s)/2;
    //first array 
    int len1 = mid-s+1;
    int *first = new int[len1];
    //elements bhi daal dete hai
    int mainIdx = s; //imp
    for(int i = 0 ; i < len1;i++){
        first[i] = arr[mainIdx++];
    }

    //second array
    int len2 = e-mid;
    int *second = new int[len2];
    //element daal do
    mainIdx = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIdx++];
    }

    //merge two sorted array
    int i = 0, j = 0;
    mainIdx = s;
    while (i < len1 && j < len2){
        if(first[i] > second[j]){
            // cout<<"first: "<<first[i] << " second: "<<second[j]<<" |";
            cnt+= (len1 - i);
        }
        if(first[i] <= second[j]){
            arr[mainIdx++] = first[i++];
        }else{
            arr[mainIdx++] = second[j++];
        }
        // for decreasing order  
        // if(first[i] > second[j]){
        //     arr[mainIdx++] = first[i++];
        // }else{
        //     arr[mainIdx++] = second[j++];
        // }
        return cnt;
    }
    
    //remaining part ko daal do
    while (i < len1)
    {
        arr[mainIdx++] = first[i++];
    }
    while (j < len2)
    {
        arr[mainIdx++] = second[j++];
    }
    delete []first;
    delete []second;
}
int mergeSort(int arr[],int s,int e){
    if(s >= e){
        return 0;
    }
    int mid = s+(e-s)/2;
    int cnt = 0;
    //left part sort krna hai
    cnt += mergeSort(arr,s,mid);
    
    //right part sort krna hai
    cnt += mergeSort(arr,mid+1,e);

    //dono ko merge krndenge
    cnt += merge(arr,s,e);
    return cnt;
}