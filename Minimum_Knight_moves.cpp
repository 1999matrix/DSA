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
const int N = 1e5+13, M = N;
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

bool vis[8][8];
int chess[8][8];
int lev[8][8];

vector<pair<int , int>> vec = { {-1 , 2} , {-1 , -2} , {1 , 2}, {1 , -2} , {2,1} , {2 , -1} , {-2 , 1} , {-2, -1} };

//=======================
bool isValid (pair<int , int> p){
    return p.first >= 0 , p.second >=0 , p.first < 8 , p.second < 8 ;
}
int bfs(string s1 , string s2){
    queue<pair<int , int>> q;

    int soX  = s1[0] - 'a';
    int soY  = s1[1] - '1';
    int dX  = s2[0] - 'a';
    int dY  = s2[1] - '1';

    q.push({soX , soY});
    vis[soX][soY] =true;
    lev[soX][soY] = 0;
    while(!q.empty()){
        pair<int , int> p  = q.front();
        q.pop();
        int x = p.first ,  y = p.second ; 
        for(auto child : vec){
            if(isValid(child)) continue;
            if(!vis[child.first+x][child.second+y]){
              q.push({child.first+x , child.second+y});
              vis[child.first+x][child.second+y]=1;
              lev[child.first+x][child.second+y] =lev[x][y]+1;
            }
        }      
        
    }



return  lev[soX][soY];
}
void reset(){
    for(int i = 0 ; i<8 ; i++){
        for(int j = 0 ; j < 8  ; j++){
            vis[i][j]=0;
            lev[i][j]=0;
        }
    }
}

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<bfs(s1 , s2)<<endl;
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
      reset();
        solve();
    }

    return 0;
}