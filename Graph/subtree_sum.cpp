#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
const ll int N = 1e5+7;

ll int subtree_sum[N];
ll int even_nodes[N];
vector<int> vec[N];

void dfs (ll int vertex , ll int par){
       if(vertex%2==0) even_nodes[vertex]++;
       subtree_sum[vertex] += vertex; 
       for(auto child : vec[vertex] ){
          if(child != par){
            dfs(child , vertex);
            subtree_sum[vertex] += subtree_sum[child];
            even_nodes[vertex] += even_nodes[child];
          }


       }
}


int main(){

 return 0;
}