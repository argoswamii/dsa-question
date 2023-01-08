#include<bits/stdc++.h>
using namespace std;

string reva(string str, int i){
	 string ans;
		if(i = str.length()) return ans;

		
		if(str[i] != "a"){
			ans.push_back(str[i]);
		}
	cout<<ans;
		return reva(str, i+1);
}

int main(){
	string str = "baccad";

	cout<<reva(str, 0);

	return 0;
}