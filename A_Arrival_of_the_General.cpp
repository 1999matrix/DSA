#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
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
    // if(n==2) {
    //     cout<<1<<endl ;
    //      return;
    // }
    map<ll int, priority_queue<int>> mp;
    ll int arr[n];
    ll int mni = 0;
    ll int mai = 0;
    fo(i, n){
    cin>>arr[i];

    }
    for(int i= 1 ; i < n ; i++){
        if(arr[mni] >= arr[i]) mni=i;
        if(arr[mai]<arr[i]) mai = i;
    }
    // ll int y=0;
    // for(auto m : mp){
    //   if(y==0){
    //     mni = m.second.top();
    //   }
      
    //   if(y==n-1){
    //     while(m.second.size()>1){
    //         m.second.pop();
    //     }
    //     mai= m.second.top();
    //   }
    //   y++;
    // }
//    cout<<mni<<" "<<mai<<endl;
    if(mni<mai){
        cout<<(n-(mni+1))+mai-1<<endl;
    }
    else{
         cout<<(n-(mni+1))+mai<<endl;
    }


    

}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

   
     
        solve();
    

    return 0;
}