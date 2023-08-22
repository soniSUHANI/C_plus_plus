//#include <iostream>
//using namespace std;
//
//void sort_asc(int a[],int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-i-1;j++){
//			if(a[j]>a[j+1]){
//				int temp = a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}
//}
//void sort_dsc(int a[],int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=1;j<n-i-1;j++){
//			if(a[j]<a[j+1]){
//				int temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}
//}
//int max_scaler(int v1[],int v2[],int n){
//	int temp=0;
//	sort_asc(v1,n);
//	sort_dsc(v2,n);
//	
//	for(int i=0;j=0;i<n;j<n;i++;j++){
//		int m= v1[i]*v2[j];
//		temp+=m;
//	}
//	return temp;
//}
//
//int main(){
//	int n;
//	cin>>n;
//	int v1[n],v2[n];
//	for(int i=0;i<n;i++){
//		cin>>v1[i];
//	}
//	for(int i=0;i<n;i++){
//		cin>>v2[i];
//	}
//	
//	cout<<max_scaler(v1,v2,n);
//}



#include <iostream>

using namespace std;

int i, j, temp;

int* createArray(int n) {
int *a;
a = (int*)malloc(n * sizeof(int));
return a;
}

int getElements(int* a, int n) {
for (i = 0; i < n; i++)
cin >> a[i];
return 0;
}

int ascending(int* a, int n) {
for (i = 0; i < n; i++) {
for (j = i + 1; j < n; j++) {
if (a[i] > a[j]) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
return 0;
}

int minScalar(int* a, int* b, int n) {
int sum = 0, p, q;
for (i = 0; i < n; i++) {
p = a[i];
q = b[n - 1 - i];
sum += (p * q);
}

cout << sum;
return 0;
}

int main() {
int n, *a, *b;
cin >> n;
a = createArray(n);
getElements(a, n);
b = createArray(n);
getElements(b, n);
ascending(a, n);
ascending(b, n);
minScalar(a, b, n);
return 0;
}


