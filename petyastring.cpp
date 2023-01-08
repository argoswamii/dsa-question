#include<bits/stdc++.h>
using namespace std;

	// char s[100];
	// char s1[100];

int main(){
// 	cin>>s>>s1;
  // int ans = stricmp(s,s1);


  // if(ans==0)cout<<"0"<<endl;
  // else if(ans<0)cout<<"-1"<<endl;
  // else cout<<"1"<<endl;



    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i]; 
    }
  
 int s=n;

 for(int i=0; i<n; i++){
    if(a[i]==a[s--]){
        cout<<a[i]<<" ";
    }
 }



    
    

    
}


    



