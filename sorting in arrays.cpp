//linear search 

#include <iostream>

using namespace std;

int linearSearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter the value you want to search in the given array: ";
	cin>>key;
	
	cout<<linearSearch(arr,n,key)<<endl;
	
	return 0;
}


