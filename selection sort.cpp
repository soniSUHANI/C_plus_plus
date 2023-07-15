//selection sort in arrays

#include <iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter the no of elements in the array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the array elements here: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<"The sorted array is: "<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
