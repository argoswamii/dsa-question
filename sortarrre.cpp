#include<bits/stdc++.h>
using namespace std;


bool sortt(int* x, int i){
	if (i==4)return true;
	
	return x[i]<x[i+1] && sortt(x, i+1);
}

bool serch(int* x, int k, int i,int n){
	if(i==n) return false;


	if(x[i]==k) return true;
	return serch(x, k, i+1, n);
}

int main(){
	int x[5]={1,9,3,4,5};

cout<<sortt(x,0)<<endl;
cout<<serch(x, 9, 0, 5)<<endl;


	return 0;
}