#include <iostream>
using namespace std;

int add(int x,int y);
int main(){
	int a,b,c;
	a=3;
	b=2;
	c=add(a,b);
	cout<<c;
	return 0;
}

int add(int x,int y){
	int z;
	z=x+y;
	return z;
}
