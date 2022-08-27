#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

vector<int> vec[100007];


void dfs(ll int vertex , ll int par){
      cout<<vertex<<" ";
      for(auto m : vec[vertex]){
        if(m != par) dfs(m , vertex); 
      }
}

int main(){


    ll int n;
    cin>>n;
    for(int i=0 ; i< n-1 ; i++){
        ll int a,b;
        cin>>a>>b;
          vec[a].pb(b);
          vec[b].pb(a);
    }
     dfs(1 , -1);

 return 0;
}