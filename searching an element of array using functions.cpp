#include<iostream>
using namespace std;

int search(int arr[],int n,int b)
{
for(int i = 0;i<n;i++)
{
if(arr[i]==b)
{
cout<<"The number "<<b<<" was Found";
break;
}
}
}

int main()
{
int n = 5;
int arr[5] = {1,15,20,10,100};
int b;
cin>>b;

search(arr,n,b);

}
