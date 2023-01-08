#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/841/problem/A


int main(){
	//no.of b
	int n;
	//no.of fri
	int f;
	cin>>n;
	cin>>f;

	int y=INT_MIN;

	string s;
	cin>>s;

	bool ans=false;

	int fre[257]={0};
	for(int i=0; i<s.length(); i++){
		fre[s.at(i)]=fre[s.at(i)]+1;
	}

	for (int i = 0; i < 257; ++i)
	{	if(fre[i]>0){
			y = max(y,fre[i]);
		if(y>f) ans=false;
			
		else ans=true;
	}
	}

	if(ans==true){
		 cout<<"Yes"<<endl;
		}else if(ans==false) cout<<"No"<<endl;



	return 0;
}