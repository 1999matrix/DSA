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


    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll int n;
    cin>>n;
    ll int arr[n];
    ll int prefix[n];
    ll int sortpre[n];
    ll int sum=0;
    for(int i=0 ; i< n ; i++){
        cin>>arr[i];
        sum+=arr[i];
        prefix[i] = sum;

    }
    int t = 1;
    cin >> t;
    sort(arr,arr+n);
    sum=0;
    for(int i=0 ; i<n ; i++){
        sum+=arr[i];
        sortpre[i]=sum;
    }
    // for(int i=0 ; i< n ;i++){
    //     cout<<prefix[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0 ; i< n ;i++){
    //     cout<<sortpre[i]<<" ";
    // }
    //  cout<<endl;
    while(t--) {
     
        ll int l,r,a;
        cin>>a>>l>>r;
        if(a==1){
            if(l==1) cout<<prefix[r-1]<<endl;
            else cout<<prefix[r-1]-prefix[l-2]<<endl;
        }
        else{
         if(l==1)cout<<sortpre[r-1]<<endl;
         else cout<<sortpre[r-1]-sortpre[l-2]<<endl;
        }
    }

    return 0;
}