#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
   unordered_map<int, int>m;
   
    m.insert({0,1});
    m.insert({0,2});
    m.insert(make_pair(6,8));
    m.insert(make_pair(6,8));
    for(auto i=m.begin(); i!=m.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
   
   return 0;
}
