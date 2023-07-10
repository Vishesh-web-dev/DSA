//use ascii values
//here crete a freq array of size of ascii numbers
//for every character go its  ascii value index in the freq array and increase its value by 1
// also we already intialized the freq array by 0
//now check maximum value in the array and output the answer 
//also if two characters have same freq then????
//for that we also maintain indices array which store the order in which the characters occures
//in other words of a comes before b in given string then indices value of a is 1 and of b will be 2
//it only updates value of a character one time 
//when finding maximum frequent character if two character with max freq occurrs then we compare their indices value and whoever
// value if smaller that will be our answer 
//O(n) && O(1) space because constant space 
char highestOccurringChar(char input[]) {
    
    // Write your code here
    int n = strlen(input);
    int freq[127] = {0};
    int indices[127] = {0};
    int j = 1;
    for(int i = 0;i < n; i++){
        freq[input[i] - 0]++;
        if(indices[input[i]-0] == 0 ){
            indices[input[i]-0] = j;
            j++;
        }
    }
    int maxn = -1;
    int maxI = 128;
    int currIndex = j+1;
    for(int i = 0; i< 127; i++){
        if(maxn < freq[i]){
            maxn = freq[i];
            maxI = i;
            currIndex = indices[i];
        }else if(maxn == freq[i]){
            if(indices[i] != 0 && indices[i] < currIndex){
                currIndex = indices[i];
                maxI = i;
            }
        }
    }
    return (char)maxI;
}