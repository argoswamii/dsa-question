#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[n];
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        cin>>a[i];
        maxi=max(maxi, a[i]);
        mini=min(mini, a[i]);
    }
    cout<<mini;
    cout<<maxi;

    int s=maxi-mini+1;
    int fre[s]={0};
    for(int i=0; i<n; i++){
        fre[a[i]-mini]++;
    }

    for(int i=0; i<s; i++){
        if(fre[i]>1) cout<<fre[i]<<" ";
    }

    
}
