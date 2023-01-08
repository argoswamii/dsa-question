#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,k;
	cin>>n>>k;

	int maxi=0;
	int mini=0;
	int is=0;
	int sm=0;
	int ans=0;

	int c[n];
	for (int i = 0; i <n; ++i)
	{
		cin>>c[i];
	}
	


	for (int i = 0; i < n; i++)
	{
		maxi=max(maxi, c[i]);
		mini=min(mini, c[i]);
		sm=c[is];

	if(c[i]!=sm){
		if(c[i]==maxi){
			c[i]-k;
			is+=i;
		}
	}else cout<<"0";

	}

	// cout<<maxi;	
	// cout<<mini;	

	ans=c[is]-mini;
	cout<<ans<<endl;

	return 0;
}