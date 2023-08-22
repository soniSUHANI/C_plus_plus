#include <iostream>
using namespace std;

void greatNum();

int main(){
	greatNum();
	return 0;
}
void greatNum(){
	int x,y;
	cin>>x;
	cin>>y;
	if(x>y){
		cout<<"x is greater";
	}
	else
	{
		cout<<"y is greater";
	}
}
