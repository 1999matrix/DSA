

// imp points about graphs ->
// 1) graph with n vertices can have maximum n*n edges
//2) adjancency matrix have space complx of order n*n but it can give answer of following questions in order O(1)
// questions are -> 1) is two node i or j connected , 2) what is weight of edge between i & j
// 3) list -> time complx -> O(v+e) ,  can't give answer of above que in order of O(1)

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

vector<pair<int , int>> vec[1007];


int main(){
    ll int vertices , edges ;
    for(int i=0 ; i<edges ; i++){
        ll int a=0 , b=0 , weight=0;
        cin>>a>>b>>weight;
        vec[a].pb({b , weight});
        vec[b].pb({a , weight});
    }

// for(int i= 1 ; i<= vertices ; i++){
//     for(auto child : vec[i]){
//         cout<<child.first<<" "<<child.second<<endl;
//     }
// }



 return 0;
}