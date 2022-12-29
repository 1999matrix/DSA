// #include<bits/stdc++.h>
// using namespace std;
// #define fo(i,n) for(i=0;i<n;i++)
// #define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
// #define ll long long
// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
// #define all(x) x.begin(), x.end()
// #define clr(x) memset(x, 0, sizeof(x))
// #define sortall(x) sort(all(x))
// #define PI 3.1415926535897932384626
// #define eb emplace_back
// #define pb push_back
// //=======================
// const int MOD = 1'000'000'007;
// const int N = 2e6+13, M = N;
// //=======================



// //=======================
 
 
// void dfs(ll int root , vector<int> *vec , ll int parent){
// cout<<root; 
// for(auto i : vec[root]){
// if(i!=parent){
// dfs(i, vec , root);
// }
// }
// }
 
 
// //=======================
// ll int power(ll int a , ll int n){
//     ll int res = 1;
//     while(n>0){
//          if(n%2){
//             n=n-1;
//              res = (a*res)%MOD;
//          }
//          else{
//              a=(a*a)%MOD;
//             n=n/2;
//          }
//     }
//     return res;
// }

// //=======================
// ll int gcd(ll int a , ll int b){
// if(b==0){
// return a;
// }
// return gcd(b,a%b);
// }

// //=======================

// ll int lcm(ll int a, ll int b){
// return (a*b)/(gcd(a,b));
// }

// //=======================

// void solve(){
//     ll int n;
//     cin>>n;
//     vector<ll int> a(n);
//     set<ll int>st;
//     priority_queue<ll int> pq;
//     for(int i=0 ; i < n ; i++){
//         cin>>a[i];
//         if(i>0){
//          st.insert(a[i]);
//          pq.push(a[i]);
//         }
//     }
//     while(pq.size()!=1){
//         pq.pop();
//     }
//     ll int y=pq.top();
//     // cout<<y<<endl;
//     auto it = st.begin();
//     ll int x = *it;
//     if(a[0]<=x) cout<<"Bob"<<endl;
//     else cout<<"Alice"<<endl;
// }
    

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0);

//     int t = 1;
//     cin >> t;
//     while(t--) {
     
//         solve();
//     }

//     return 0;
// }
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
    string s;
    cin>>s;
    map<char , int > mp;
    int x=0;
    for(int i =0 ; i <s.length() ; i++){
         if(!mp.count(s[i])){
            x++;
            int g = x/9 + (x%9!=0);

          mp.insert({s[i] , g });
         }
    }
    ll int sum=0;
    for(int i=0 ; i<s.length() ; i++){
    sum+=mp[s[i]];
    }
    cout<<sum<<endl;

    // ll int n,m;
    // cin>>n>>m;
    // vector<vector<char>> a( n , vector<char> (m, '0')); 
    // // vector<vector<char>> b( n , vector<char> (m, '0')); 
    
    
    // vector<int>r(n,0);
    // vector<int>c(m,0);
    // for(int i=0 ; i<n; i++ ){
    //     for(int j=0 ; j <m ;j++){
    //         cin>>a[i][j];
    //     }
    // }
    // for(int i=0 ; i<n; i++ ){
    //   for(int j=0 ; j<m ; j++){
    //     if(a[i][j]=='1'){
    //         r[i]++;        }
    //   }

    // }
    // for(int j=0 ; j<m; j++ ){
    //   for(int i=0 ; i<n; i++){
    //     if(a[i][j]=='1'){
    //         c[j]++;        }
    //   }

    // }
    // int mx =INT_MIN; 
    // for(int i=0 ; i<n; i++ ){
    //   for(int j=0 ; j<m ; j++){
    //     int g= n-(2*r[i]) + m-(2*c[j]);
    //     mx = max(mx , g);
    //   }

    // }
   

}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    
     
        solve();
    

    return 0;
}