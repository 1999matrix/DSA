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
    vector<char> v;
    for(int i = 97 ; i<=122 ; i++){
        v.pb(char(i));
    }

     string s;
     cin>>s;
     string str = s;
     sort(str.begin() , str.end());
     vector<ll int> vec;
    //  vec.pb(1);
     multimap<char , ll int> mp;
     for(int i =0 ; i <str.size() ; i++){
       mp.insert({str[i] , i+1});
     }
     bool fg = false;
     for(auto m : mp){
        
     }
     ll int x=0;
     ll int y=0;
     bool flag = false;
     for(auto m : mp){
        if(m.second== str.length()-1 || m.second== 1) {
           flag=true;

        }
        if(flag) x++;
        // deb(x);
        if(m.second== str.length()-1 || m.second== 1 && x>1 ){
            flag =false;
            break;
        }
        
     }

     ll int cost = abs(((str[0] - 'a') +1 ) - ((str[str.length()-1] - 'a')+1 ));
     ll int jump = x;
     cout<<cost<<" "<<jump<<endl;
     for(int i=0; i < vec.size() ; i++ ){
        cout<<vec[i]<<" ";
     }
     cout<<endl;
    
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