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

    // vector<char> vec;
    // for(int i = 97 ; i<=122 ; i++){
    //     vec.pb(char(i));
    // }
//     // for(int i = 0 ; i<26 ; i++){
//     //     cout<<vec[i]<<" ";
//     // }
//     string str;
//     cin>>str;
//     string r;

//     for(int i= 0 ; i<n ; i++){
//         if(str[i] == '1' || str[i]=='2'){
//             if(str[i+1]=='1' || str[i+1]=='2'&& i+2<=n-1 && str[i+2]=='0' && i+3>=n-1 && str[i+3]=='0'){
//                 if(str[i]=='1' ) r.pb('a');
//                 if(str[i]=='2' ) r.pb('b');
//                  if(str[i+1]== '2') r.pb('t');
//                  else r.pb('j');
//                  i=i+3;
//             }
//         else  if( i+2<=n-1 && str[i+2]=='0'){
//               string s ;
//               s.pb(str[i]);
//               s.pb(str[i+1]);
//               int num = stoi(s);
//               char c = vec[num-1];
//               r.pb(c);
//               i= i+2;
//            }
//            else{
//             if(str[i]=='1')r.pb('a');
//             else r.pb('b');
            
            
//            }
//         }
        
//         else{
//             int  x = str[i]-'0';
//             r.pb(vec[x-1]);

//         }
//         // if(str[i] == '1' || str[i]=='2' && str[i+2]=='0' && i+2 <=n-1){
              
//         // }
//     }
//     cout<<r<<endl;
//     // int a='3' - '1';
//     // deb(a);

    
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
// #include <bits/stdc++.h> 
// #define ll long long int 
// using namespace std; 
// void solve(){ 
//     ll n;cin>>n; 
//         vector<char> vec;
//     for(int i = 97 ; i<=122 ; i++){
//         vec.push_back(char(i));
//     }
//     char st[n+1];cin>>st; 
//     char v[n+1]; 
//     ll m=0; 
//     for(ll i=0;i<n;i++){ 
//         if( i+2<=n-1 && st[i+2]=='0'&& i+3<=n-1&& st[i+3]==st[i+2]) v[m++]=st[i]+48; 
//         else if(i+2<=n-1 && st[i+2]=='0'&&   st[i+3]!='0') {v[m++]=10*(st[i]-48)+(st[i+1]-48)+96;i+=2;} 
//         else v[m++]=st[i]+48; 
//     } 

//     for(int i=0;i<m;i++){ 
//         cout<<v[i]; 
//     } 
//     cout<<endl; 
// } 
// int main() { 
//     int t;cin>>t; 
//     while(t--) 
//     solve(); 
//  return 0; 
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
    ll int n;
    cin>>n;
    vector<char> vec;
    for(int i = 97 ; i<=122 ; i++){
        vec.pb(char(i));
    }
    string str;
    string r;
    cin>>str;
    for(int i= n-1 ; i>=0 ; i--){
        if(str[i]=='0'){
            if((i-2) >=0){
                string s ;
              s.pb(str[i-2]);
              s.pb(str[i-1]);
              int num = stoi(s);
              char c = vec[num-1];
              r.pb(c);
              i= i-2;
            }
        }
        else{
            r.pb(vec[(str[i] -'0')-1]);
        }
    }
    reverse(r.begin() , r.end());
    cout<<r<<endl;

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