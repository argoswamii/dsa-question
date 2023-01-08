#include<bits/stdc++.h>
using namespace std;

	void saydigit(int n, string a[]){
		if(n==0) return;

		int digit=n%10;
		n=n/10;
		saydigit(n, a);
		cout<<a[digit]<<" ";
	}

int main(){

	string a[10]={"zero", "one","two","three", "four","five","six","seven","eight", "nine"};

	int n=432;
	 saydigit(n, a);


	return 0;
}		