#include <iostream>
using namespace std;

//enum mobile{BatteryCap = 1, cameraQua=2; LargeStorage=4
//};
//
//int main(){
//	int feature = cameraQua | largeStorage;
//	
//	cout<<feature;
//	return 0;
//}

struct person{
	string name;
	int age;
};
int main(){
	person p1;
	p1.name="hari";
	p1.age=21;
	
	person p2;
	p2.name="jala";
	p2.age=23;
	
	cout<<p1.name<<" "<<endl<<p1.age<<endl;
	cout<<p2.name<<" "<<endl<<p2.age;
	return 0;
}
