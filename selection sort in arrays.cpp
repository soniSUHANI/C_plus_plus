#include <iostream>

using namespace std;

int main(){
	int n=6;
	int arr[n]={7,4,10,8,3,1};
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		if(min != i){
			swap(arr[i],arr[min]);
		}
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
