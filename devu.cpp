#include<bits/stdc++.h>
using namespace std;

long long n,m;


int main(){
	// int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	for (int i = 0; i < n; ++i) cin>>a[i];
	
	for (int i = 0; i < m; ++i) cin>>b[i];
	
	sort(a, a + n);
	sort(b, b + m);

int i=0;
int j=m-1;
long long sum=0;
while(true){
	sum+= max(0, b[j]-a[i]);
	if(i==n || j==0)break;
	i++; j--;
}

cout<<sum<<" ";


	return 0;
}