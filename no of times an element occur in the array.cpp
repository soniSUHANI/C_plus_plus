#include <iostream>
using namespace std;

int main(){
	int n=7;
	int arr[7]={11,13,14,13,15,16,12};
	int count =0;
	int ele=13;
	
	for(int i=0;i<n;i++){
		if(arr[i]==ele){
			cout<<"position: "<<i+1<<endl;
			count++;
		}	
	}
	cout<<count<<endl;

	
}
