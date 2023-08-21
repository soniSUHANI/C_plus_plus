#include<iostream>
using namespace std;


int maxscalar(int arr[],int arr1[],int n)
{
int sum = 0;
for(int i = 0;i<n;i++)
{
sum = sum + arr[i] * arr1[i];
}
return sum;
}

int ascensding(int arr[],int arr1[],int n)
{
for(int i = 0;i<n;i++)
{
for(int j = 0;j<n;j++)
{
if(arr[i]>arr[j])
{
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}

for(int i = 0;i<n;i++)
{
for(int j = 0;j<n;j++)
{
if(arr1[i]>arr1[j])
{
int temp = arr1[i];
arr1[i] = arr1[j];
arr1[j] = temp;
}
}
}
}

int main()
{
int n;
cin>>n;
int arr[n];
int arr1[n];

for(int i = 0;i<n;i++)
{
cin>>arr[i];
}

for(int i = 0;i<n;i++)
{
cin>>arr1[i];
}

ascensding(arr,arr1,n);

cout<<maxscalar(arr,arr1,n);


}


