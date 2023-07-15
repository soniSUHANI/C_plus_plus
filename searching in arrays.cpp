#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
   
}

int main(){
	
	int n;
	cout<<"Enter the number of elements you want in the array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter the element you want to search: ";
	cin>>key;
	
	cout<<linearSearch(arr,n,key)<<endl;
	
	return 0;
}
