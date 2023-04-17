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

//=======================

void solve(ll int t){
    ll int n,m,p;
    cin>>n>>m>>p;
    vector<vector<int>> a( n , vector<int> (m)); 
     for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>a[i][j];

        }
     }
     ll int ans =0 ;
     for(int j=0 ; j<m ; j++){
     ll int mx =0;
        ll int g = a[p-1][j];
        for(int i=0 ; i<n ; i++){
            ll int f=a[i][j];
           mx = max(mx , f); 
        }
        if(mx > g) ans+=abs(mx-g);
     }
     cout<<"Case #"<<t<<": "<<ans<<endl;

    
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t = 1;
    cin >> t;
    ll int x=0;
    while(t--) {
         x++;
        solve(x);
    }

    return 0;
}