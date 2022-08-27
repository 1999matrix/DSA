#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

vector<int> vec[100007];
vector<int> h(107);
vector<int> d(107);


void dfs(ll int vertex , ll int par){

   
    //   cout<<vertex<<" ";
    
      for(auto m : vec[vertex]){
        if(m != par) {
            d[m] = d[vertex]+1;
          dfs(m , vertex); 
          h[vertex] = max(h[vertex] , h[m]+1); 
      }
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
    dfs(1 , 0);
   for(int i= 1 ; i<n+1 ; i++){
    cout<<d[i]<<" ";
   }
   cout<<endl;
   for(int i= 1 ; i<n+1 ; i++){
    cout<<h[i]<<" ";
   }

 return 0;
}