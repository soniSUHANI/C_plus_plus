#include <iostream>
using namespace std;
int main(){
	class Employee{
		public:
			string name;
			int salary;
			
			Employee(string name, int salary)
			{
				this->name = name;
				this->salary = salary;
			}
			
			void printDetails(){
				cout<<"The name of our first employee is "<<this->name<<" and his salary is "<<this->salary<< " Dollars "<<endl;
			}
	};
	
	Employee har("Harry constructor",344);
//	har.name = "harry";
//	har.salary = 100;
//	cout<<"The name of our first employee is "<<har.name<<" and his salary is "<<har.salary<<" dollars "<<endl;
	har.printDetails();
	return 0;
}
