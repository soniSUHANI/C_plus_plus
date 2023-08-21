#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int x = 10,y=5;
	for(int i=1;i<=n;i++){
		if(i%2 == 0){
			cout<<y<<" ";
			y+=10;
		}
		else{
			cout<<x<<" ";
			x+=50;
		}
	}
	cout<<endl;
	return 0;
	
}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//int n=5,i,a=10,b=5;
//for(i=1;i<=n;i++)
//{
//if(i%2==0){
//printf("%d ",b);
//b+=10;
//}
//else
//{
//printf("%d ",a);
//a+=50;
//}
//}
//
//}


