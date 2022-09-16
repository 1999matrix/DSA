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
    

    vector<ll int> x(n);
    vector<ll int> y(n);

    ll int count=0;
     for(auto & i : x) cin>>i;
     for(auto & i : y) cin>>i;

     vector<ll int  > vec(n);
     for(int  i = 0 ; i< n ; i++){
         vec[i] = y[i] - x[i];
     }
     sort(vec.begin() , vec.end() , greater<int>());
        ll int j=n-1;
         ll int i=0;
        //  for(auto m  : vec){
        //     cout<<m<<" ";
        //  }
        while(j>i){
            if(vec[i]+vec[j] >= 0) {
                // deb(vec[i]);
               count++;
               i++;
               j--;
            }
            else{
                j--;
            }

        }
     
    


    // ll int count=0;9

    
    cout<<count<<endl;

}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
     
        solve();
    }

    return 0;
}