#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
const ll int N = 1e5+7;
ll int p[N];
vector<ll int> vec[N];

void dfs(ll int vertex , ll int par = -1){
       p[vertex] = par;
       for(auto child : vec[vertex]){
        if(child != par){
            dfs(child , vertex);
        }
       }
}

vector<ll int> path (ll int a){
    vector<ll int> v;
    v.pb(a);
    while(p[a] != -1){
         v.pb(p[a]);
         a= p[a];
    }
    reverse(v.begin() , v.end());
    return v;
    
}

int main(){
    ll int n;
 cin>>n;
 for(int i=0 ; i<n ; i++){
 ll int x , y;
 cin>>x>>y;
 vec[x].pb(y);
 vec[y].pb(x);
 }
 dfs(1);
 for(int i=0  ; i < n ; i++){
    cout<<p[i]<<" ";
 }
 cout<<endl;
 ll int a,b;
 cin>>a>>b;

 vector<ll int> l = path(a);
 vector<ll int> r = path(b);
 ll int u =min(l.size() , r.size());
 ll int lca=0;

for(ll int i= 0 ; i<u ; i++){
     if(l[i] == r[i]){
        lca = l[i];
     }
}
cout<<lca<<endl;
 

 return 0;
}