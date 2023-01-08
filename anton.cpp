#include<bits/stdc++.h>
using namespace std;
//barn
long long n;
long long x=0;
//grans buy ed
long long m;

long long ans=0;



int main(){
	cin>>n;
	cin>>m;
	x=x+n;
	for(auto i=1; i<=n; i++){

		n=n-i;
		if(x<n){
			n=n+m;
		}
		
		if(n==0 || n<0){
			ans= ans+i;
		}
	}
cout<<ans<<endl;
	return 0;
}