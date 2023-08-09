//wap to store employee details usig union

#include <iostream>
using namespace std;

//union employee{
//	int empId;
//	int age;
//	float sal;
//};
//int main(){
//	union employee e1;
//	e1.empId =12217;
//	e1.age= 18;
//	e1.sal = 80000;
//	cout<<e1.age<<" "<<e1.empId<<" "<<e1.sal<<" "<<endl;
//}




union book
{
char book[50];
int price;

};

int main(){
union book b1;

b1.book ="The boy in the stripped pajamas";
b1.price=300;

cout<<b1.book<<endl;
cout<<b1.price<<endl;
}
