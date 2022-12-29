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
// bool cmp(pair<ll int , ll int> a , pair<ll int , ll int>b){
//     return a.second >= b.second;
// }
void solve(){
    ll int n,w;
    cin>>n>>w;
    vector<ll int> c(n);
    vector<ll int> p(n);
    // vector<pair<ll int , ll int>> a;
    priority_queue<pair<ll int , pair<ll int, ll int>>>pq;

    vector<ll int> t(n);
    for(int i=0 ; i< n ;i++){
        cin>>c[i];
    }
   
    for(int i=0 ; i< n ;i++){
        cin>>p[i];
    }
   
    for(int i=0 ; i< n ;i++){
        cin>>t[i];
    }
    for(int i=0 ; i< n ;i++){
        ll int x = p[i]/c[i];
        pq.push({x,{t[i],p[i]*c[i]}});
    }
   
   ll int sum=0;
   while(w>0){
    ll int x = pq.top().second.first;
    // deb(x);
    if(w-x >=0){
        sum+=pq.top().second.second ;
    }  
        w=w-x;
    pq.pop();
   }
   cout<<sum<<endl;
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