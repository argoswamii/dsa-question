#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
int feq[100]={0};
int val=n/3+1;
// int ans;
cout<<8/3;
cout<<10/3;

    for(int i=0; i<n; i++){
        feq[a[i]]++;
    }

    for(int i=1; i<100; i++){
    	if(feq[i] >= val){
    		cout<<i<<endl;
    	}
    }
}
