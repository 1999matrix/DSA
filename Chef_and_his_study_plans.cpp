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
bool cmp (vector<ll int> a , vector<ll int> b){
    return a[1]<=b[1];
}
void solve(){
    ll int n,q;
    cin>>n>>q;
    
    

    vector<vector<ll int>>a(n,vector<ll int>(2,0));
    vector<vector<ll int>>b(n,vector<ll int>(2,0));
    for(int i=0 ; i< n ; i++){
       for(int j=0 ; j<2 ; j++){
        cin>>a[i][j];
       }
    }
    sort(a.begin() , a.end() ,cmp);
    // for(int i=0 ; i < n ; i++){
    //     for(int j=0 ; j<2 ; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    while(q--){
     ll int x,y;
     ll int z=0;
     ll int cnt=0;
     cin>>x>>y;
     ll int x1=0,y1=0;
      for(int i=0 ; i< n ; i++){
         if(x<= a[i][0] && a[i][1]<=y && a[i][0]>=y1){
            cnt++;
            y1 = a[i][1];
         }
      }
      cout<<cnt<<endl;
    }
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

   
     
        solve();
    

    return 0;
}