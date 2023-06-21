// wap to not print the values divisible by 3 from 1 to 100


#include <iostream>
using namespace std;

int main(){
	for (int i=0; i<100;i++){
		if(i%3==0){
			continue;
		}
		cout<<i<<endl;
	}
	
	return 0;
}
