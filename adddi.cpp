#include<bits/stdc++.h>
using namespace std;

 int addDigits(int num) {
        if(num==0) return num;
        
        int a=num%10;
        if(num>9) num/10;
         int ns = a + addDigits(num); 
        return ns;  
    }

int main(){
	int x=23;
	int ans=addDigits(x);
	cout<<ans;

	return 0;
}