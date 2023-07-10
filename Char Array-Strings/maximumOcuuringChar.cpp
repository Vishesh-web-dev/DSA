// Merge two sorted subarrays into a single sorted subarray
void merge(char arr[], int low, int mid, int high) {
    int leftSize = mid - low + 1;
    int rightSize = high - mid; 

    // Create temporary arrays to hold the left and right subarrays
    char left[leftSize], right[rightSize];

    // Copy data to temporary arrays
    for (int i = 0; i < leftSize; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < rightSize; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0;  // Initial index of the left subarray
    int j = 0;  // Initial index of the right subarray
    int k = low;  // Initial index of the merged subarray

    // Merge the temporary arrays back into arr[]
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSort(char arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Sort first and second halves recursively
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}
char highestOccurringChar(char input[]) {
    // Write your code here
    int arraySize = strlen(input);
    mergeSort(input,0,arraySize-1);
    char ans = input[0];
    int count= 1;
    int maxn = -1;

    for(int i = 0; i<arraySize-1;i++){
        if(input[i]==input[i+1]){
            count++;
        }else if(input[i] != input[i+1]){
            if(maxn < count){
                maxn = count;
                ans = input[i];
            }
            count = 1;
        }
    }
    if(count > maxn){
        ans = input[arraySize-1];
    }
    return ans;
}