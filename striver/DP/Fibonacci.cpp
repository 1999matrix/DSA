#include<bits/stdc++.h>
using namespace std;

#define int long long int

#define pb push_back
#define MOD 1000000007


int fib(int n, vector<int>&a){
    if(n==1 || n==2)
    return 1;
    else if(a[n] !=0) return a[n];

    else{
        a[n] = fib(n-1 ,a)+fib(n-2 ,a);
        return fib(n-1 , a)+fib(n-2,a);
    }
}

signed main(){
  int n;
  cin>>n;
 vector<int> a(n+1);
 cout<<fib(n , a)<<endl;
 return 0;
}