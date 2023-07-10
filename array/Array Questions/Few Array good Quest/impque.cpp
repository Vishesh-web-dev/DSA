// Given an integer N, let us consider a triangle of numbers of N lines in which a number a11 appears in the first line, two numbers a21 and a22 appear in the second line, three numbers a31, a32 and a33 appear in the third line, etc. In general, i numbers ai1,ai2…aii appear in the ith line for all 1≤i≤N. Develop a program that will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that:

// on each path the next number is located on the row below, more precisely either directly below or below and one place to the right.
// Warning: large Input/Output data, be careful with certain languages

// Input Format
// The first line of the input contains an integer T, the number of test cases.
// Then T test cases follow. Each test case starts with an integer N, the number of rows. Then N lines follow where in ith line contains i integers ai1,ai2…aii.
// Output Format
// For each test case print the maximum path sum in a separate line.

#include <iostream>
#include <climits>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int j = 1;
	    
	    int arr[n][j];
	    for(int i = 0;i<n;i++){
	        for(int k=0;k<j;k++){
	            cin>>arr[i][k]; //first row me ek element then second row me 2 element ....
	        }
	        j++;
	    }
	    int maxSum = INT_MIN;
	    int sum = 0;
	    //for each col traverse every rows and increase row by 1 (means if col is 2 start with row 2 )
	    for(int k=0;k<n;k++){
	        for(int i = k;i<n;i++){
	            sum += arr[i][k];
	        }
	        maxSum = max(maxSum,sum);
	        sum = 0;
	    }
	    cout<<maxSum<<"\n";
	}
	return 0;
}
