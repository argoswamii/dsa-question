#include<bits/stdc++.h>
using namespace std;

long long sum=0;

int main(){
	long long n;
	cin>>n;
	
	long long a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		sum+=a[i];
	}

	cout<<sum<<endl;
		if(sum%2==1){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}

	return 0;
}