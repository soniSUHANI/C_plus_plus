#include <iostream>
using namespace std;
//
//int main(){
//	int n1=sizeOf(arr1)/sizeOf(int);
//	int arr1[n1]={1,3,5,7,9,12};
//	int n2=sizeOf(arr2)/sizeOf(int);
//	int arr[n2]={2,4,6,8};
//	int k=n1+n2;
//	int arr3[n1+n2];
//	int i=0,j=0,l=0;
//	while(k!=0){
//		if(arr1[i]>arr2[j]){
//			arr3[l]=arr2[j];
//			j++;
//		}
//		else if(arr1[i]<=arr2[j]){
//			arr3[l]=arr1[i];
//			i++
//		}
//		l++;
//		k--;
//	}
//	for(int i=0;i<n1+n2;i++){
//		cout<<arr3[i]<<" ";
//	}
//	return 0;
//}



void mergeArrays(int arr1[], int arr2[], int n1,
int n2, int arr3[])
{
int i = 0, j = 0, k = 0;
while (i<n1 && j <n2)
{
if (arr1[i] < arr2[j])
arr3[k++] = arr1[i++];
else
arr3[k++] = arr2[j++];
}
while (i < n1)
arr3[k++] = arr1[i++];

while (j < n2)
arr3[k++] = arr2[j++];
}

int main()
{
int arr1[] = {1, 3, 5, 7};
int n1 = sizeof(arr1) / sizeof(arr1[0]);

int arr2[] = {2, 4, 6, 8};
int n2 = sizeof(arr2) / sizeof(arr2[0]);

int arr3[n1+n2];
mergeArrays(arr1, arr2, n1, n2, arr3);

cout << "Array after merging" <<endl;
for (int i=0; i < n1+n2; i++)
cout << arr3[i] << " ";

return 0;
}
