#include<bits/stdc++.h>
using namespace std;


int main(){
	int s;
	cin>>s;
	int *x = new int[s];
	int maxi=INT_MIN;
	int mini=INT_MAX;
	//[1 4 8 -1 2]
		for (int i = 0; i < s; i++)
	{
		cin>>x[i];
	}
	for (int i = 0; i < s;i++)
	{
		maxi = max(maxi, x[i]);
		mini = min(mini, x[i]);
	}
	
		int fre[maxi-mini+1]={0};
		for (int i = 0; i < s; i++)
	{
		//
		fre[x[i]- mini]=fre[x[i]- mini]+1;
	}
		for (int i = 0; i <maxi-mini+1; i++)
	{
		if(fre[i]>0) 
			cout<< i+mini << "-->"<<fre[i]<<" ";
	}

	return 0;
}