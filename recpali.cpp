#include<bits/stdc++.h>
using namespace std;

bool recursion(string& s, int i, int l){
	if(i > l) return true;

	if(s[i]!=s[l])return false;
	

	return recursion(s, i+1, l-1);
}

int main(){
	string s="daad";
	int l=s.size()-1;

	cout<<recursion(s,0,l);
	


	return 0;
}