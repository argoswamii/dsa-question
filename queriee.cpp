#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,mn;
	cin>>n>>mn;
	ll a[n];
	ll b[mn];

	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
	}
	sort(a, a+n);
	for (int i = 0; i <mn; ++i)
	{
		cin>>b[i];
	}

	
	for(int i=0; i<mn; i++){
		int key=0;
		key+=b[i];
		 cout<<upper_bound(a, a+n, key)-a<<" ";
		
	}

	return 0;
}