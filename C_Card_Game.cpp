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



// #include<bits/stdc++.h>
// using namespace std;
// const int T[30][3]={{1,0,1},
// {3,2,1},
// {12,7,1},
// {42,27,1},
// {153,98,1},
// {560,363,1},
// {2079,1352,1},
// {7787,5082,1},
// {29392,19227,1},
// {111605,73150,1},
// {425866,279565,1},
// {1631643,1072512,1},
// {6272812,4127787,1},
// {24186087,15930512,1},
// {93489272,61628247,1},
// {362168442,238911947,1},
// {407470704,927891162,1},
// {474237047,614943428,1},
// {319176974,87534470,1},
// {131938523,955113935,1},
// {558075845,644336680,1},
// {544270478,253841470,1},
// {209493498,700054910,1},
// {859106804,457241336,1},
// {921005664,6522991,1},
// {366933608,353887625,1},
// {142064435,432533537,1},
// {741221694,874398972,1},
// {297907370,545598131,1},
// {341102826,248150916,1}
// };
// int main() {
//    int t,n;
//    cin >> t;
//    while(t--) {
//       cin >> n;n=n/2-1;
//       cout << T[n][0] << ' ' << T[n][1] << ' ' << T[n][2] << endl;
//    }
// }