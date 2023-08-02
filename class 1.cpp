#include <iostream>

using namespace std;

int main(){
	char gen;
	cout<<"Enter the gender: ";
	cin>>gen;
	
	int age;
	cout<<"Enter the age: ";
	cin>>age;
	
	if(age>=21){
		if(gen == 'm'){
			cout<<"elig bac";
		}
		else if(gen== 'f'){
			cout<<"elig spi";
		}
	}
	return 0;
}
