#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        // int mini=0;
        // int maxi=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int f[1000]={0};
        for(int i=0; i<n; i++){
            f[a[i]]++;
        }
        int maxf=0;
         for(int i=0; i<1000; i++){
            if(f[i]>0){
            	cout<<f[i]<<endl;
                maxf=max(maxf, f[i]);
            }
        }
        
        // cout<<(n-maxf)<<endl;
       
      
    }
    
	return 0;
}
