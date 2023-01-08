#include<bits/stdc++.h>
using namespace std;

void pattern(int r, int c){
	if(r==0)return;

	if(c<r){
		cout<<"*";
		pattern(r,c+1);
	}else{
		cout<<endl;
		pattern(r-1, 0);
	}
}

void bubble(int* arr, int n, int i){
	if(n==0)return;

	if(i<n){
		if(arr[i]>arr[i+1]){
		swap(arr[i],arr[i+1]);
	}
		bubble(arr,n,i+1);
	}else{
		bubble(arr,n-1,i);
	}
}

int main(){
	int arr[]={1, 4, 3, 5};
	// pattern(4,0);
	// bubble(arr, 3, 0);

	for (int i = 0; i < 4; i++)
	{
		cout<<arr[i];
	}cout<<endl;


	return 0;
}