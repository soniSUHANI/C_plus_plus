//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	
//	int a=2;
//	for(int i=0;i<n;i++){
//		a=(a*2)-i;
//		cout<<a<<" ";	
//	}
//	
//	cout<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;

int a = 1;

for(int i = 1;i<=n;i++)
{
cout<<i+a;
a = a+a;
}
}


