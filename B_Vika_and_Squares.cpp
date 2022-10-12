#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define eb emplace_back
#define pb push_back
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
//=======================



//=======================
 
 
void dfs(ll int root , vector<int> *vec , ll int parent){
cout<<root; 
for(auto i : vec[root]){
if(i!=parent){
dfs(i, vec , root);
}
}
}
 
 
//=======================
ll int power(ll int a , ll int n){
    ll int res = 1;
    while(n>0){
         if(n%2){
            n=n-1;
             res = (a*res)%MOD;
         }
         else{
             a=(a*a)%MOD;
            n=n/2;
         }
    }
    return res;
}

//=======================
ll int gcd(ll int a , ll int b){
if(b==0){
return a;
}
return gcd(b,a%b);
}

//=======================

ll int lcm(ll int a, ll int b){
return (a*b)/(gcd(a,b));
}

//=======================

void solve(){
    ll int n;
    cin>>n;
    ll int arr[n];
    int i=0;
    // map<ll int , vector<ll int>> mp;
    set<ll int>s;
    ll int mind = 0 ;
    fo(i,n){
        cin>>arr[i];
        
        if(arr[mind]>=arr[i])mind = i;


    }
    i=0;
    fo(i,n){
        if(arr[i]==arr[mind]){
            s.insert(i);
            s.insert(i+n);
        }
    }

    // if(s.size()==1){
    //     cout<<n*arr[0]<<endl;
    //     return;
    // }
    
    ll int mx=0;
    i=0;
    fo(i,n){
    ll int diff=0;

    auto it = s.lower_bound(i);
    if(it !=s.end()){
    diff=(*it)-i;
   }
    mx = max(mx , diff);
    }
    // deb(mx);
    cout<<mx+(n*arr[mind])<<endl;

    
    
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

 
     
        solve();
    

    return 0;
}




// #include <iostream>
// #include <vector>
// using namespace std;
 
// int main() {
//     int n;
//     cin >> n;
//     vector<int> c(n);
//     for (int i=0; i<n; ++i) {
//         cin >> c[i];
//     }
 
//     vector<int> si;
//     long long min_len = c[0];
//     for (int i=0; i<n; ++i) {
//         if (c[i] < min_len)
//             min_len = c[i];
//     }
//     for (int i=0; i<n; ++i) {
//         if (c[i] == min_len)
//             si.push_back(i);
//     }
 
//     long long max_gap = 0;
//     if (si.size() == 1)
//         max_gap = n-1;
//     else {
//         for (int i=0; i<si.size()-1; ++i) {
//             if (max_gap < si[i+1] - si[i] -1)
//                 max_gap = si[i+1] -si[i] -1;
//          }
//         if (max_gap < n-si.back()-1 + si.front()) {
//             max_gap = n-si.back()-1+ si.front();
//         }
//     }
//     cout << min_len * n + max_gap << endl;
// }