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
#define ub upper_bound
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

void shashwat(ll int t){
   ll int n = 0, m = 0, k = 0 ;
  int rs, rh;
  cin >> rs >> rh;
  cin >> n;
  vector<ll int> a;
  vector<ll int> b;
  while (n--) {
    int xi, yi;
    cin >> xi >> yi;
    if (xi*xi + yi*yi <= (rs+rh)*(rs+rh)) {
      a.pb(xi * xi + yi * yi);
    }
  }
  sort(a.begin() , a.end());


priority_queue<ll int> pq;
  for(int i= 0 ; i < a.size() ; i++){
    pq.push(i);
  }
  cin >> m;
  while (m--) {
    int wi, zi;
    cin >> wi >> zi;
    if (wi * wi + zi * zi <= (rs+rh) * (rs+rh)) {
      b.pb(wi * wi + zi * zi);
    }
  }
  
  ll int x =a.size();
  ll int y=b.size();
  sort(b.begin() , b.end());
  priority_queue<ll int> s;
  for(int i= 0 ; i < 10 ; i++){
    s.push(i);
  }
  ll int c = s.top();
  ll int res=c;
  s.pop();
  c = s.top();
  res+=c;
 
  if (a.size() && b.size()) {
    if (a[0]<b[0]) {
      int x = ub(all(a), b[0]) - a.begin();
      c=0;
      x=x+c;
      cout <<"Case #"<<t<<": "<< x << " " << 0<<endl;
    } else {
      int x = ub(all(b), a[0]) - b.begin();
      c=0;
      x=x+c;
      cout<<"Case #"<<t<<": " << 0 << " " << x<<endl;
    }
  } else {
    if (x)
      cout <<"Case #"<<t<<": "<<x<< " " << 0 <<endl;
    else
      cout<<"Case #"<<t<<": " << 0 << " " << y <<endl;
  }
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t = 1;
    cin >> t;
    ll int x=0;
    while(t--) {
       x++;
        shashwat(x);
    }

    return 0;
}