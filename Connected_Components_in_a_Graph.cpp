#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
#define N 100007
bool vis[N];
vector<ll int> vec[N];
vector<ll int> cc;
vector<vector<ll int>> comp;



void dfs(ll int v){
    // cout<<v<<" ";
    vis[v] = true;
    cc.pb(v);
    for(auto i : vec[v]){
        if(vis[i]) continue;
           dfs(i);
    }
}

int main(){
    ll int n , m;
    cin>>n>>m;
    for(int i=0 ; i<m ; i++){
        ll int a,b;
        cin>>a>>b;
        vec[a].pb(b);
        vec[b].pb(a);
    }
    ll int count=0;

    for(int i=1 ; i<=n ; i++){
        if(vis[i]==true) continue;
        else{
        cc.clear();
        dfs(i);
     comp.pb(cc);
        count++; 
        }
        
    }
    for(int i=0 ; i<comp.size() ; i++){
       for(auto m : comp[i]){
        cout<<m<<" ";
       }
       cout<<endl;
    }
    cout<<comp.size()<<endl;


 return 0;
}