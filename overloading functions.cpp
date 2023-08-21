#include <iostream>
using namespace std;

int ope(int a,int b){
	return a*b;
}
double ope(double a,double b){
	return a/b;
}
int main(){
	int x=5, y=2;
	
	double n=5.0, m=2.0;
	
	cout<<ope(x,y)<<endl;
	cout<<ope(n,m)<<endl;
	
	return 0;
}
