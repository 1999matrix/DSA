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
const int N = 1e5+13, M = N;
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
bool visg[N];
bool visw[N];
void solve(){
    ll int n;
    cin>>n;
    // priority_queue<pair<ll int , ll int>> g,w;


    // map<ll int  , ll int> mp;
    // for(int i = 0 ; i < n ; i++){
    //     ll int a=0 ; 
    //     cin>>a;
    //     g.push({a, i+1});

    // }
    // for(int i = 0 ; i < n ; i++){
    //     ll int a=0 ; 
    //     cin>>a;
    //     w.push({a, i+1});

    // }
    // while(!g.empty()){
    //     ll int b= g.top().second;
    //     g.pop();
    //     mp.insert({b, g.size()});
    // }
    // while(!w.empty()){
    //     ll int b= g.top().second;
    //     g.pop();
    //     mp[b]+=w.size();
    // }
    // for(auto m : mp){
    //     cout<<m.first<<" "<<m.second;
    // }

//     priority_queue<pair<ll int , ll int>>g,w;
//         vector<set<ll int>> vec(n);

//   for(int i = 0 ; i< n ; i++){
//     ll int a=0;
//     cin>>a;

//     g.push({a,i+1});

    
//   }
  
//   for(int i = 0 ; i< n ; i++){
//     ll int a=0;
//     cin>>a;
// w.push({a,i+1});
// }

// while(!g.empty()){
//     ll int x=n;
//     ll int b= g.top().second;
//     visg[b]=true;
//     while(x--){
        
//         if(visg[x]==true) continue;
//         else vec[b].insert(x);
//     }
// }

// while(!w.empty()){
//     ll int x=n;
//     ll int b= w.top().second;
//     visw[b]=true;
//     while(x--){
//         if(visw[x]==true) continue;
//         else vec[b].insert(x);
//     }
// }
// ll int count=0;
// ll int mx=0;

// for(auto m : vec){
//     if(m.size() > mx){
//       mx=m.size();
//       count=0;
//       count++;
//     }
//     if(m.size() == mx){
     
//       count++;
//     }
//     if(m.size() < mx){
//      continue;
//     }
// }
 

set<pair<ll int , ll int>> s ,t ;
ll int n;
cin>>n;
map<ll int  , ll int> mp;
for(int i = 0 ; i < n ; i++){
    ll int a;
    cin>>a;
    s.insert({a , i+1});
}
for(int i = 0 ;i < n ; i++){
    ll int a;
    cin>>a;
    t.insert({a , i+1});
}
ll int x=n;
for(auto m : s){

}



}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
     
        solve();
    }

    return 0;
}



// #include<bits/stdc++.h> 
// using namespace std; 
// #define ll long long 
 
 
// void solve(){ 
//     int n; cin>>n; 
//     vector<int> arr(n),brr(n),temp1(n),temp2(n); 
 
//     for(int i=0;i<n;i++){ 
//         cin>>arr[i]; 
//         temp1[i]=arr[i]; 
//     } 
 
//     for(int i=0;i<n;i++){ 
//         cin>>brr[i]; 
//         temp2[i]=brr[i]; 
//     } 
 
//     sort(temp1.begin(),temp1.end()); 
 
//     sort(temp2.begin(),temp2.end()); 
 
//     temp1.erase(unique(temp1.begin(),temp1.end()),temp1.end()); 
 
//     temp2.erase(unique(temp2.begin(),temp2.end()),temp2.end()); 
 
//     for(int i=0;i<n;i++){ 
//         arr[i]=lower_bound(temp1.begin(),temp1.end(),arr[i])-temp1.begin(); 
//     } 
 
//     for(int i=0;i<n;i++){ 
//         brr[i]=lower_bound(temp2.begin(),temp2.end(),brr[i])-temp2.begin(); 
//     } 
 
//     int temp=0,ans=0; 
 
//     vector<int> p(n),q(n),r,crr(n); 
 
//     for(int i=0;i<n;i++){ 
//         crr[arr[i]]=brr[i]; 
//         p[i]=arr[i]+brr[i]; 
//         q[brr[i]]=i; 
//     } 
 
//     for(int i=0;i<n;i++){ 
//         r.insert(upper_bound(r.begin(),r.end(),crr[i]),crr[i]); 
//         p[q[crr[i]]]-=lower_bound(r.begin(),r.end(),crr[i])-r.begin(); 
//     } 
 
//     for(auto  i:p){ 
//         temp=max(i,temp); 
//     } 
 
//     for(auto i:p){ 
//         ans+=(i==temp); 
//     } 
 
//     cout<<ans<<endl; 
 
// } 
 
// int32_t main(){ 
//     int tc=1;  
//     cin>>tc; 
//     while(tc--){ 
//         solve(); 
//     } 
//     return 0; 
// }