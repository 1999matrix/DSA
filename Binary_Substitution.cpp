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
//     ll int n ; 
//     cin>>n;
//     string s;
//     cin>>s;
    
//     ll int a=0 , b=0 ;
//     for(int i = 0 ; i < n ; i ++){
//         if(s[i]=='0') a++;
//         else b++;

//     }
//     // deb2(a , b);
//     if(a==0 || b==0) {
//         cout<<n<<" "<<0<<endl;
//         return;
//     }
//     vector< pair<ll int , pair<ll int  , ll int>> > c;
//     ll int cnt=0 ; 
//     for(int i=0 ; i < n-1 ; i++ ){
//             if(a==b){
//                 c.pb({1 , {n-cnt , 1}});
//                 cnt++;
//                 goto fend ;
//             }
//         if(s[i]=='0' && s[i+1]=='1' || s[i]=='1' && s[i+1]=='0'){
//             if(a>b) {
//                 a--;
//                 c.pb({i+1, {i+2 , 1}});
//                 cnt++;

//             }
//             else{
//                   b--;
//                 c.pb({i+1, {i+2 , 0}});
//                 cnt++;
//             }
//         }
//     }
//     fend :
//     cout<<1<<" "<<cnt<<endl;
//     for(auto m : c){
//        cout<<m.first<<" "<<m.second.first<<" "<<m.second.second<<endl;
//     }
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
#include <iostream>
using namespace std;
#define int long long
#define sg string
#define vi vector<int>
#define vc vector<char>
#define mi unordered_map<int,int> 
#define mc unordered_map<char,char>
#define mic unordered_map<int,char>
#define mci unordered_map<char,int>
#define pb push_back
#define pf push_front
#define sz(a) a.size()
// for loop
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,a,b) for(int i=a;i>=b;i--) // reverse forloop

#define ret return
#define bk break
#define endl "\n"
#define adiwish ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int mod(int n){
    return n % 1000000007;
}
bool isprime(int n){
    if(n==1) ret false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) ret false;
    ret true;
}
int isSquare(int n){
    int l=1,h=n;
    while(l<=h){
        int mid=(l+h)/2;
        if(mid*mid==n) return mid;
    if(mid*mid<n) l=mid+1;
        else h=mid-1;
    }
    return -1;
    }
bool cmp(int a, int b){
    return a>b;
}
int power(int a,int b){
    int temp=1;
    while(b--)
        temp*=a;
    return temp;
}

void code(){
    int n; cin>>n;
    string s; cin>>s;
    int zero=0,one=0;
    f(i,0,n){
        if(s[i]=='0') zero++;
        else one++;
    }
    if(one==zero){
        cout<<1<<" "<<1<<endl;
        cout<<1<<" "<<n<<" "<<0<<endl; ret;
    }
    else if(one==n||zero==n){
        cout<<n<<" "<<0<<endl;
        ret;
    }
    char c;
    if(one>zero) c='0';
    else c='1';
    int k=abs(zero-one);
    cout<<1<<" "<<k+1<<endl;
    while(k--){
        string temp=""; 
        n=s.length();
        int in=-1;
        for(int i=0;i<n-1;i++)
            if(s[i]!=s[i+1]){
                in=i; bk;
            }
        cout<<in+1<<" "<<in+2<<" "<<c<<endl;
        temp+=s.substr(0,in);
        temp+=c;
        temp+=s.substr(in+2,n-in-2);
        s=temp;
    }
    cout<<1<<" "<<s.length()<<" "<<c<<endl;

}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    adiwish

    int t; cin>>t;
    while(t--){
        code();
        //cout<<endl;
    }
}