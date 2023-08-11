#include <iostream>
using namespace std;

int main(){
	int n = 7;
	int arr[7]={1,2,3,4,5,6,7};
	int half = n/2;
	int l=half;
	int r=n-1;
	
	for(int i=0;i<l-1;i++){
		int temp = arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=temp;
	}

	
	while(l<r){
		int temp = arr[l+1];
		arr[l+1]= arr[r];
		arr[r]=temp;
		l++;
		r--;
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	return 0;
}
