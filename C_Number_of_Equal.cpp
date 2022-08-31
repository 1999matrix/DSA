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
    
    ll int n,m;
    cin>>n>>m;
    // deb2(n,m);
    ll int a[n];
    ll int b[m];
    // vector<ll int> v(m);
    // ll int c[n+m];
    for(int x= 0 ; x< n ; x++){
          cin>>a[x];
    }
    for(int x=0 ; x<m ; x++){
        cin>>b[x];
    }
   
    ll int i=0 , j=0 , count=0;
      ll int prev_count=0;
      stack<int> st;
      st.push(0);

      while(i<n && j<m){

        if(j-1>=0 && b[j]==b[j-1]){
          count+=st.top();
            //  deb(prev_count);
            //   deb(count);
          j++;
          continue;

        }
         prev_count=0;
     if(a[i]<b[j]){
        i++;
        goto fend;
     }
     while(a[i]==b[j]){
        prev_count++;
        count++;
        i++;
        st.push(prev_count);

      if(a[i]!=b[j]) {
        goto fend;
      }   
     }
    //  deb(count);
    
     if(a[i]>b[j]){
        j++;
        //  goto fend;
     }
     fend : 
     ll int v=0;
      }

      cout<<count<<endl;
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    
     
        solve();
    

    return 0;
}