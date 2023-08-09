#include <iostream>
using namespace std;

struct student
{
	int rn, sb1,sb2,sb3,sb4,sb5;
	
};
int main(){
	int n, avg=0, grade=0;
	cin>>n;
	
	struct student s[n];
	
	for(int i=0; i<n; i++){
		cin>>s[i].sb1>>s[i].sb2>>s[i].sb3>>s[i].sb4>>s[i].sb5;
		
	}
	for(int i=0;i<n;i++){
		avg=(s[i].sb1+s[i].sb2+s[i].sb3+s[i].sb4+s[i].sb5)/5;
		if(avg>70){
			grade=1;
		}
		else if(avg<=70 && avg>=50){
			grade=2;
		}
		else if(avg<50){
			grade =3;
		}
		
		cout<<s[i].rn<<" "<<s[i].sb1<<" "<<s[i].sb2<<" "<<s[i].sb3<<" "<<s[i].sb4<<" "<<s[i].sb5<<" ";
		
	}
	return 0;
}
