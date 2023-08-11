#include <iostream>

using namespace std;

int main(){
	int n=5;
	int arr[5] ={1,2,3,4,5};
	
	int pos= 2;
	int ele= 6;
	for(int i=n;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=ele;
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
