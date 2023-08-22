#include <iostream>
using namespace std;

void fillWater();
int main(){
	fillWater();
	return 0;
}
void fillWater(){
	float r,h,amtWtrPhr,TnoOfHrs;
	cin>>r;
	cin>>h;
	cin>>amtWtrPhr;
	cin>>TnoOfHrs;
	int v=(3.14)*r*r*h;
	int t=amtWtrPhr*TnoOfHrs;
	if(t>=v){
		cout<<"The tank can be filled within "<<TnoOfHrs<<"hours";	
		
	}
	else {
		cout<<"The tank is not filled";
	}
}
