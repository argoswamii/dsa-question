#include<bits/stdc++.h>
using namespace std;


void merge(int* a, int s, int e){
	int mid=s+(e-s)/2;
	int b[10]={0};
	int i=s;
	int j=mid+1;
	int k=s;

	while(i<=mid && j<=e){
		if(a[i]<= a[j]){
			b[k]=a[i];
			i++;
		}else {
			b[k]=a[j];
			j++;
		}
		k++;
	}

		while(j<=e){
			b[k]=a[j]; 
			j++;
			 k++;
		}
		while(i<=mid){
			b[k]=a[i]; 
			i++;
			 k++;
		}

	for (int i = s; i <=e; i++)
	{
		a[i]=b[i];
	}

}

void mergesort(int* a, int s, int n){

	if(s>=n)return;

	int mid=s+(n-s)/2;
	mergesort(a, s, mid);
	mergesort(a, mid+1, n);
	merge(a, s, n);


}

int main(){
	int n=10;
	int a[n]={4,5,6,7,8,9,1,2,3,10};

	mergesort(a, 0, n-1);

	for (int i = 0; i <n; i++)
	{
		cout<<a[i]<<" "; 
	}

	return 0;
}