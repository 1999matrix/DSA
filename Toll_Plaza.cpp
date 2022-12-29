#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
#define ll long long

int main() {
    ll int n,m,a,b;
    cin>>n>>m>>a>>b;
    ll int c = (n/m)*b+(n%m)*a;
    ll int d= (n/m+(n%m!=0))*b;
    ll int e= n*a;
    // cout<<c<<" "<<d<<" "<<e<<endl;
    
   ll int mx = min(c , d);
      mx = min(e , mx);
    cout<<mx<<endl;
    return 0;
}
