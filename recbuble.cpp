#include<bits/stdc++.h>
using namespace std;

void bubble(int* a, int s){
	if(s==1)return;

for(int i=0; i<s-1; i++){
	if(a[i]>a[i+1]){
		swap(a[i], a[i+1]);
	}
}
	 bubble(a, s-1);
}


int main(){
	int s=5;
	int x[5]={3,4,2,1,5};

	bubble(x, s);
	for (int i = 0; i < s; ++i)
	{
		cout<<x[i]<<" ";
	}


	return 0;
}