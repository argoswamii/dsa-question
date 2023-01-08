#include<bits/stdc++.h>
using namespace std;

int solve(int i, vector<int>&a ,vector<int>&dp ){
	if(i>=a.size()-1) return 0;

	if(dp[i]!=-1)return dp[i];

	int op=INT_MAX;
	int op2=INT_MAX;

	op=abs(a[i]-a[i+1])+solve(i+1, a, dp);

	if(i+2<=a.size()-1){
		op2= abs(a[i] - a[i+2])+solve(i+2, a, dp);
	}
	return dp[i]=min(op,op2);

}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	vector<int> dp(n+1, -1);

	cout<<solve(0, a, dp);



	return 0;
}