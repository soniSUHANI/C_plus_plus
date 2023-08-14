#include <iostream>
using namespace std;

int main(){
	int n=6;
	int arr[6]={5,4,10,1,6,2};
	int temp;
	for(int i=1;i<n;i++){
		temp=arr[i];
		int j =i-1;
		while(arr[j]>temp && j>=0){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;

	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
