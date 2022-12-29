#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,m,a,b;
    cin>>n>>m>>a>>b;
    long long int c = (n/m)*b+(n%m)*a;
    
    long long int mx = min(c , (n/m+(n%m==0))*b);
      mx = min(n*a , mx);
    cout<<mx<<endl;
    return 0;
}
