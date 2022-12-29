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
    vector<char> a(n);
    ll int p=0; ll int q=0;
    for(int i=0; i < n ;i++){
        cin>>a[i];
        if(a[i]=='0') p++;
        else  q++;
    }
    ll int x =0 , y=0;
    ll int mx=0 , mx1=0;
   ll int i=0;
    while(i<n){

    
        if(a[i]=='1') {
            while(i<n && a[i] !='0') {
                x++ , i++;
        }
        
        mx= max(mx , x);
          x=0;
        }
        else i++;
    }
    i=0;
    while(i<n){

    
        if(a[i]=='0') {
            while(i<n && a[i] !='1') {
                y++ , i++;
        }
        
        mx1= max(mx1 , y);
        y=0;
        }
        else i++;
    }
    ll int mx2 =0;
    ll int mx3 =0;
    mx2 = max(mx*mx , mx1*mx1 );
    mx3 = max(mx2 , p*q );
    cout<<mx3<<endl;


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