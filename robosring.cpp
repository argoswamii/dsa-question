#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int ans=0;
	while(n--){
		string a;
		cin>>a;
		
		
		int count=0;
		for(auto i=0; i<a.length(); i++){
			for(auto k=1; k<a.length(); k++){
				if(a.at(i) != a.at(k))
					count++;

			}
		}
		cout<<count<<endl;
			ans= ans + count;
			
	}
cout<<ans<<endl;

	return 0;
}