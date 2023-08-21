#include <iostream>
#include <iomanip>
using namespace std;

//int main(){
//	cout<<setw(10)<<"Hello"<<endl;
//	cout<<setprecision(3)<<2.5555<<endl;
//	
//	return 0;
//}

int main(){
	int n=50;
	
	cout<<setbase(8)<<n<<endl;
	cout<<setbase(10)<<n<<endl;
	cout<<setbase(16)<<n<<endl;
	return 0;
}
