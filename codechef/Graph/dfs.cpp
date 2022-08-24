#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
#define MAX 100000

ll int vis[MAX];

void dfs(ll int vertex , vector<int> edges[]){
    vis[vertex]=1;
    cout<<vertex<<" ";
    for(auto i : edges[vertex]){
        if(vis[i]==0){
            dfs(i , edges);
        }
    }
}          

int main(){
    // memset(vis , 0 , sizeof(vis));

  ll int n;
  cin>>n;

  vector<int> *edge = new vector<int>[n+1];
  for(int i=1 ; i<n+1 ; i++){
    ll int a,b;
    cin>>a>>b;
    edge[a].pb(b);
    edge[b].pb(a);
    

dfs( 1 , edge);
  }  

 return 0;
}