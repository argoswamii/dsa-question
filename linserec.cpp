#include<bits/stdc++.h>
using namespace std;

bool rec(int x[], int t, int s){
	if(s==0) return false;

	if(x[0]==t) return true;

	return rec(x+1, t, s-1);

}


int main(){
	int t=6;
	int x[5]={1,2,6,4,5};

	cout<<rec(x, t, 5);


	return 0;
}