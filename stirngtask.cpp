#include<bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	s.erase(remove(s.begin(), s.end(), 'a'), s.end());
	s.erase(remove(s.begin(), s.end(), 'o'), s.end());
	s.erase(remove(s.begin(), s.end(), 'y'), s.end());
	s.erase(remove(s.begin(), s.end(), 'e'), s.end());
	s.erase(remove(s.begin(), s.end(), 'u'), s.end());
	s.erase(remove(s.begin(), s.end(), 'i'), s.end());

	string s2=" ";
	for(char i=0; i<s.size(); i++){
		s2.push_back('.');
		s2.push_back(s[i]);
		
	}

	cout<<s2;


	return 0;
}