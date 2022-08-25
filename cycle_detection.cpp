#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
#define MAX 100007

bool vis[MAX];
vector<int> edge[MAX];

void dfs(ll int vertex , ll int parent){
    
    
    // cout<<vertex<<" ";
    vis[vertex]=true;

    for(auto i : edge[vertex]){
       if(vis[i]){
         if(i != parent) cout<<"cycle present from "<<vertex<<" to "<<i<<endl;
       }
       else{
      
         dfs(i , vertex);
       }
        
           
        
    }
    
}          

int main(){
  
  ll int n,m;
  cin>>n>>m;

//   vector<int> *edge = new vector<int>[n+1];
  for(int i=0 ; i<m ; i++){
    ll int a,b;
    cin>>a>>b;
    edge[a].pb(b);
    edge[b].pb(a);
    
}  
for(int i=0  ; i< n ; i++ ){
    if(vis[i]) continue;
    else{
        dfs(i,-1);
    }
}


// dfs( 7 );            // how to get different connected components
 return 0;
}