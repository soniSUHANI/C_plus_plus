#include <iostream>
using namespace std;

int greatNum();

int main(){
	int a= greatNum();
	cout<<a;
	return 0;
}
int greatNum(){
	int x,y,greatnum;
	cin>>x;
	cin>>y;
	if(x>y){
		greatnum=x;
	}
	else{
		greatnum=y;
	}
	
	return greatnum;
}
