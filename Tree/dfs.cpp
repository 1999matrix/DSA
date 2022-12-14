#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

#define pb push_back

#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
//=======================



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

void dfs(ll int root , vector<int> *vec , ll int parent , map<ll int , ll int> mp){
    // cout<<root<<" ";       // <-----1 based indexing
    mp[root] = mp[parent]+1;
    for(auto i : vec[root]){
        if(i!=parent){
            dfs(i, vec , root , mp);
        }
    }
}





void solve(){
    ll int n;
    cin>>n;
    vector<int>*vec = new vector<int> [n+1];     // vector<int> vec[n];   
    for(int i=1 ; i <n ; i++){
        ll int a , b;
        cin>>a>>b;
        vec[a].pb(b);
        vec[b].pb(a);
       

    }
    map<ll int  , ll int> mp;
    mp[-1]=0;
    dfs(4, vec , -1  , mp);
    for(auto m : mp){
        cout<<m.first<< " "<<m.second<<endl;
    }

    // cout<<endl;
    // dfs(3, vec , -1);
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

   solve();
    

    return 0;
}
