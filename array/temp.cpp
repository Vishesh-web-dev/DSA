#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int K;
	    cin>>n>>K;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin>>arr[i];
	    }
	    long long int s = 1,flag =0;
	    for (int i = 0; i < n; i++){
            for (int j = i; j < n; j++){
                for (int k = i; k <= j; k++){
                    s *= arr[k];
                }
            // cout<<s<<endl;
            if(s%K == 0){
                flag = 1;
            }
            s = 1;
            }
        }
        if(flag == 1){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
	}
	return 0;
}
