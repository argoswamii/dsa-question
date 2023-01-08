#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];

	int ans[n+1]={0};

	for(int i=0; i<m; i++){
		int count=0;
		for(int j=0; j<n; j++){
			if(a[j]<=b[i]){
				count++;
			}
			ans[i]=ans[i]+count;
		}
	}

	for (int i = 0; i <=n; ++i)
	{
		cout<<ans[i]<<" ";
	}



	return 0;
}