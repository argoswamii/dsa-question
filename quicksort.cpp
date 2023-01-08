#include<bits/stdc++.h>
using namespace std;


int partition(int* a, int s, int e){
	int pivot = a[s];
	int cnt=0;
	for (int i = s+1; i < e; ++i)
	{
		if(a[i]<pivot) cnt++;
	}

	int pivotindex=s+cnt;

	swap(a[pivotindex], a[s]);

	int i=s;
	int j=e;

	while(i<pivotindex && j>pivotindex){
		while(a[i]<pivot){
			i++;
		}

		while(a[j]>pivot){
			j--;
		}

		if(i<pivotindex && j>pivotindex){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}

	return pivotindex;
}


void quicksort(int* a, int s,int n){
	if(s>n)return;

	int p=partition(a, s, n);

	quicksort(a, s, p-1);

	quicksort(a, p+1, n);

}



int main(){
	int a[]={2,3,1,4,5};
	int n=5;

	quicksort(a, 0,n-1);

	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}

	


	return 0;
}