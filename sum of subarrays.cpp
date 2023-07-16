#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the no of elements in the array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	int sum = 0;
	for(int i=0;i<n-1;i++){
		sum =0;
		for(int j=i;j<n-1;j++){
			sum += arr[j];
			cout<<sum<<endl;
		}
	}
	
	return 0;
}
