#include <iostream>
using namespace std;
int main(){
	int n=5;
	int arr[5]={1,2,3,4,5};
	int pos =2;
	
	for(int i=pos;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
