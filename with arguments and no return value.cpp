#include <iostream>
using namespace std;

int greatNum(int,int);

int main(){
	int x,y;
	cin>>x;
	cin>>y;
	greatNum(x,y);
	
	return 0;
}
int greatNum(int x,int y){
	if(x>y){
		cout<<"X is greater";
	}
	else{
		cout<<"Y is greater";
	}
}

