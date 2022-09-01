#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

const ll int n =1e5+7;
const ll int max_d=INT_MIN;
ll int d[n];
ll int d2[n];
vector<ll int > vec[n];

void dfs (ll int vertex , ll int  par){
    d[vertex]= d[par]+1;
    for(auto child : vec[vertex]){
       
        if(child != par){
             d[child]+=d[vertex];
              dfs(child , vertex);
        
        }
    }
}
void dfs2 (ll int vertex , ll int  par){
    d2[vertex]= d2[par]+1;
    for(auto child : vec[vertex]){
       
        if(child != par){
             d2[child]+=d2[vertex];
              dfs2(child , vertex);
             
        }
    }
}

int main(){
 ll int a;
 cin>>a;
 for(int i=0 ; i<a ; i++){
 ll int x , y;
 cin>>x>>y;
 vec[x].pb(y);
 vec[y].pb(x);
 }
 dfs(1 , 0);
 ll int max_i =0;
 ll int max1 =0;
 for(int i = 1 ; i<=a ; i++){
    if(d[i]>max1) max1=d[i] , max_i=i;
 }
 dfs2(max_i , 0);
 for(int i=0 ; i < a ; i++){
    cout<<d[i]-1<<" "<<d2[i]-1<<endl;
 }
 ll int mx =0;
 for(int i = 0 ; i<a ; i++){
  mx=max(mx , d2[i]);
 }
 cout<<mx-1<<endl;

 return 0;
}