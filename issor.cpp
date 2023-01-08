#include<bits/stdc++.h>
using namespace std;

bool issorted(int* a, int s){
	if(s==0 || s==1) return true;

	if(a[0]>a[1]){
		return false;
	}
	else return issorted(a+1,s-1);
};

int main(){
	int x=5;
	int a[5]={2,8,4,5,6};
cout<<	issorted(a,x);


	return 0;
}