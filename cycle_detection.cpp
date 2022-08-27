#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
#define MAX 100007

bool vis[MAX];
vector<int> edge[MAX];

bool dfs(ll int vertex , ll int parent){
    
    
    // cout<<vertex<<" ";
    vis[vertex]=true;
   bool isCycle=0;
    for(auto i : edge[vertex]){
       if(vis[i]){
        if(i == parent) return true;
         else return false;
        //  if(i != parent) cout<<"cycle present from "<<vertex<<" to "<<i<<endl;
       }
      
       else{
      
        isCycle |= dfs(i , vertex);
       }
        
           
        
    }
    return isCycle;
    
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
bool isCycle =0;
for(int i=0  ; i< n ; i++ ){
    if(vis[i]) continue;
    else{
       isCycle|= dfs(i,-1);
    }
}
cout<<isCycle<<endl;


// dfs( 7 );            // how to get different connected components
 return 0;
}