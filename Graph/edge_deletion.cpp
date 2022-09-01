#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
const ll int N = 1e5+7;

int subtree_sum[N];
int val[N];
vector<int> vec[N];

void dfs(int v , int par){
    subtree_sum[v] += val[v];
for(auto child : vec[v]){
    if(child == par ) continue;
    dfs(child , v);
    subtree_sum[v]+=subtree_sum[child];
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
 dfs(1,0);
 ll int res=0;
 for(int i=1 ; i <=a ;i++){
     ll int part1 = subtree_sum[i];
    ll int   part2 = subtree_sum[1]-part1;
     res=max(res, (part1*part2))%MOD;
 }

 return 0;
}