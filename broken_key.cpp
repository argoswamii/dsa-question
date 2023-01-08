#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int size=s.size();
		int a[size]={0};
		for(int i=0; i<size; i++){
			a[s[i] -'a']++;
		}

		for(int i=0; i<size; i++){
			if(a[i]>0){
				if(a[i]%2!=0){
				cout<<s[i]<<endl;
			}
		}
		}
	}
}