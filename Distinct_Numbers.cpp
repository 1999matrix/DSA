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
const int N = 2e6+13;
//=======================
const int M = 2e5+7;
bool dp[M];

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

void solve(){
    ll int n,k;
    // cin>>n>>k;
    // ll int mx=0;
    // vector<ll int> a(n);
    // map<ll int, bool> mp;
    // for(int i=0 ; i< n ;i++){
    //     cin>>a[i];
    //     mx=max(mx,a[i]);
    //     mp[a[i]]=1;
    // }
    // vector<ll int>z;
    // for(int i=0; i <k ; i++){
    //   if(!mp.count(i+1)){
    //     z.pb(i+1);
    //   }
    // }int k;
 cin>>n>>k;
 vector<int>a(n);
 ll int ans=1;
 map<ll int , ll int>mp;
 int m=0;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
     
     m=max(m,a[i]);

     mp.insert({i ,i });
 }

 ll int ans1=0;
 ll int ans2=0;
 for(int i=1;i<=2*n;i++)
 {
      if(ans>k)
      {
          break;
      }
      if(!mp.count(i))
      {
          m=max(m,i);
          ans1+=m-i;
         ans++;
      }
        
 }
  ans=1;
    for(int i=1;i<=2*n;i++)
    {
        if (ans>(k-1))
        {
            break;
        }
         if(!mp.count(i))
      {
        ans2+=((2*n)-i);
          ans++;
      }
           
    }
    ll int res =0;
    if(ans1 >= ans2) res=ans1;
    else res=ans2;
    cout<<res<<endl;

    
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