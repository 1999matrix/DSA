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
const int p =100007;
const int MOD = 998244353;
const int N = 2e6+13, M = N;
// ll int arr[p][2];
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

void bigdaddy(){
    string d;
    cin>>d;
    ll int n=d.length();
    ll int res=0;
    ll int arr[p][2];
   arr[0][0]=1;
   for(int i=0 ; i < n-1 ; i++){
    if(d[i+1] != d[i]){
      if(i==0) res = (res+2);
      else res=(res+1);
    }
   }
   if(res==0) res=1;
   
   for(int i=1; i < n ; i++){
       res=0;
      res += arr[i-1][0];
      res = res%MOD;
      res+=arr[i-1][1];
      res = res%MOD;
      arr[i][0] =res;
      if(d[i] != d[i-1]){
          arr[i][1] = arr[i-1][0];

      }
      else{
        arr[i][1] = 0;
      }

   }
   res=0;
   res+=arr[n-1][1];
   res=res%MOD;
   res+=arr[n-1][0];
   res=res%MOD;
   cout<<res<<endl;
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
   


    int t = 1;
    cin >> t;
    while(t--) {
     
        bigdaddy();
    }

    return 0;
}
