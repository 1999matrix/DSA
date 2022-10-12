#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define eb emplace_back
#define pb push_back
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
//=======================



//=======================
 
 
void dfs(ll int root , vector<int> *vec , ll int parent){
cout<<root; 
for(auto i : vec[root]){
if(i!=parent){
dfs(i, vec , root);
}
}
}
 
 
//=======================
ll int power(ll int a , ll int n){
    ll int res = 1;
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
ll int gcd(ll int a , ll int b){
if(b==0){
return a;
}
return gcd(b,a%b);
}

//=======================

ll int lcm(ll int a, ll int b){
return (a*b)/(gcd(a,b));
}

bool is_palindrome(vector<ll int> a){
    ll int n=a.size();
    for(int i=0 ; i<=n/2 ;i++){
      if(a[i] != a[n-1-i]) return false;
    }
    return true;
}
bool fun(vector<ll int> a){
     ll int n=a.size();
    for(int i=0 ; i<=n/2 ;i++){
      if(a[i] > a[n-1-i]) return false;
    }
}

//=======================

void solve(){
    ll int n;
    cin>>n;
    if(n==1) {
     cout<<0<<endl;
     return;
    }
    vector<ll int> a(n);
    for(int i=0;i < n ;i++){
        cin>>a[i];
    }

   bool f= is_palindrome(a);
    if(f) {
        cout<<0<<endl;
        return;
    }
    ll int i=0 ;
    ll int j=n-1 ;
    ll int mx=0;
    vector<ll int>b;
    while(j>i){
     b.pb(a[j]-a[i]);
     i++;
     j--;
    }
    vector<ll int>c;
    c=b;
    sort(c.begin() , c.end() , greater<int>());
    if(c!=b) {
        cout<<-1<<endl;
        return;
    }
    for(int k=0 ; k<b.size() ; i++){
        if(b[k]<0) {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<b[0]<<endl;
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
     
        solve();
    }

    return 0;
}