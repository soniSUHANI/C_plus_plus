#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int sum=0;
	for( int count=0;count<=n;count++){
		sum=sum+count;
	}
	
	cout<<sum<<endl;
	return 0;
}
