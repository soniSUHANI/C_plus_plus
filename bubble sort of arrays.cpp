#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no of elements: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the array you want to sort: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int counter =1;
	while(counter<n-1){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				
			}
		}
		counter++;
	}
	
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
