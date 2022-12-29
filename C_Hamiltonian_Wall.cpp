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
void df(vector<vector<char>>a, int i , int j , int x ,int &y , bool &f , int m){
     if(a[i][j]=='B'){
       y++;
     }
    if(y==x){
        f=true;
        return;
    }
    if(i>=2 || j>=m || i<0 || j<0) return;
        df(a, i+1 , j , x ,y ,f,m);
        df(a, i-1 , j , x ,y ,f,m);
       df(a, i , j+1 , x ,y ,f,m);
        df(a, i , j-1 , x ,y ,f,m);

}
void solve(){
    ll int m;
    cin>>m;
    ll int x=0;
    bool f=false;
    int y=0;
    vector<vector<char>>a(2 , vector<char> (m)); 
    for(int i=0 ; i < 2 ; i++){
         for(int j=0; j<m ; j++){
            cin>>a[i][j];
            if(a[i][j]=='B') x++;
         }
    }
    for(int i=0 ; i < 2 ; i++){
         for(int j=0; j<m ; j++){
         df(a, i , j , x , y ,f ,m);
          if(f){
            cout<<"YES"<<endl;
          }
         }
    }
    cout<<"NO"<<endl;

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