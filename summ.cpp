#include<bits/stdc++.h>
using namespace std;

	int sum(int* a, int s){
		if(s==0)return 0;

		if(s==1)return a[0];

		int chot=sum(a+1, s-1);
		int big=chot+a[0];
		return big;

	}

	

int main(){
	int x=5;
	int a[x]={1,2,3,4,5};

	cout<<sum(a, x);


	return 0;
}