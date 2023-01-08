#include<bits/stdc++.h>
using namespace std;

int sum(int x[], int n){
    if(n<=0){
        return 0;
    }
    int ans=x[n-1]+sum(x, n-1);
    return ans;
}

int fibo(int n){
    if(n==0 || n==1) return n;

return fibo(n-1)+fibo(n-2);
}

int bsearch(int x[], int t,int s, int e){
    if(s>e)return -1;

    int m=s+(e-s)/2;

    if(x[m]==t)return t;

    if(x[m]<t)return bsearch(x, t, m+1, e);

    return bsearch(x, t, s, m-1);

}

void print(int n){
    if(n==0)return ;
    print(n-1);
    cout<<n<<endl;
}

int product(int n){
    if(n<=1)return 1;

    // int ans= n*product(n-1);
    return n*product(n-1);
}

int sum(int n){
    if(n==1 || n==0)return n;

    int ans=n+sum(n-1);
    return ans;
}

void reverse(int n){
    if(n<10){
        cout<<n;
        return;
    }else{
       
    int ans=n%10;
    cout<<ans;
       reverse(n/10);
   }
}

int countz(int n,int c){
    if(n==0)return c;

    int ans=n%10;
    if(ans==0){
       return countz(n/10, c+1);
    }
    
    return countz(n/10, c);
}


int main(){
    int x[]={4,6,8,12};
    int n=4;

   cout<<fibo(8)<<endl;
    cout<<sum(x,n)<<endl;

int s=0;
int e=n-1;
int t=8;
cout<<bsearch(x,t,s,e)<<endl;

print(8);

cout<<product(3)<<endl;
cout<<sum(5)<<endl;
reverse(345);

cout<<endl;
cout<<countz(4003020, 0)<<endl;

    return 0;
}