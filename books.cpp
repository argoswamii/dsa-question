#include<bits/stdc++.h>
using namespace std;


int main(){
	int n, t;
	cin>>n>>t;

	int ans=0;
	int i=0;
	int j=n;

	int b[n]={0};
	for(int i=0; i<n; i++){
		cin>>b[i];
	}

	int countofbook=0;
	int sum=0;
	int k=0;

	for(int i=0; i<n; i++){
		sum+=b[i];
		if(sum<=t){
			countofbook++;
		}else{
			sum=sum-b[k];
			k++;
		}
	
	}
	cout<<countofbook<<endl;
	return 0;
}