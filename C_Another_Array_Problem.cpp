#include<bits/stdc++.h>
using namespace std;
#define rpn(i,x,n) for(int i=x;i<n;i++)
#define rrpn(i,n) for(int i=n;i>=0;i--)
#define rpn2(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long int
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define eb emplace_back
#define pb push_back
#define vi vector<int>
#define vii(x,n,m) vector<vector<int>>x(n , vector<int>(m.0))
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
//=======================



//=======================
 
 
void dfs(ll root , vector<int> *vec , ll parent){
cout<<root; 
for(auto i : vec[root]){
if(i!=parent){
dfs(i, vec , root);
}
}
}
 
 
//=======================
ll power(ll a , ll n){
    ll res = 1;
    while(n>0){
         if(n%2){
            n=n-1;
             res = (a*res)%MOD;
         }
         else{
             a=(a*a)%MOD;
            n=n/2;
         }
    }
    return res;
}

//=======================
ll gcd(ll a , ll b){
if(b==0){
return a;
}
return gcd(b,a%b);
}

//=======================

ll lcm(ll a, ll b){
return (a*b)/(gcd(a,b));
}

//=======================

void solve(){
    ll n;
    cin>>n;
    vi a(n);
    rpn(i,0,n){
        cin>>a[i];
    }
    

}
    

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
     
        solve();
    }

    return 0;
}