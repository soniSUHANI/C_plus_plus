#include <iostream>
using namespace std;

//int main(){
//	int a,b,c;
//	cin>>a>>b>>c;
//	
//	if(a>b){
//		if(a>c){
//			cout<<a<<endl;
//		}
//		else{
//			cout<<c<<endl;
//		}
//	}
//	
//	else{
//		if(b>c){
//			cout<<b<<endl;
//		}
//		else{
//			cout<<c<<endl;
//		}
//	}
//}

// wap to show weather a given number is odd or even

int main(){
	int n;
	cout<<"Enter the number ";
	cin>>n;
	
	if(n/2==0){
		cout<<n<<" is even"<<endl;
	
	}
	
	else{
		cout<<n<<" is odd"<<endl;
	}
}
