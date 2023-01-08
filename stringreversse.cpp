#include<bits/stdc++.h>
using namespace std;

string recur(string& s, int start, int end){
		if(start > end)return s;

		swap(s[start], s[end]);
		return recur(s, start+1, end-1);
}

int main(){
	string s="abcd";
	int l=s.size()-1;

	recur(s, 0, l);
	cout<<s;



	return 0;
}