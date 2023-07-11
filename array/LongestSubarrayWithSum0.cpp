#include<vector>
#include <bits/stdc++.h>
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here. 
    //forward store used cause need max idx of repetitive prefix sum
    //we can use backward store as well see copy ==> elements in mpp till now
	unordered_map<int,int> mpp;
	arr.insert(arr.begin(),0);
	for(int i = 1 ; i < arr.size() ; i++){
		arr[i]+=arr[i-1];
		mpp[arr[i]] = i; //max idx
	}
	int sz = 0;
	int maxsz = 0;
	for(int i = 0 ; i < arr.size() ; i++){
		if(mpp.find(arr[i]) != mpp.end()){
			sz = mpp[arr[i]] - i ;
		}
		maxsz = max(maxsz,sz);
	}
	return maxsz;
}