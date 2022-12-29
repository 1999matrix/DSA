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


bool checkRightAngled(int X1, int Y1,
                      int X2, int Y2,
                      int X3, int Y3)
{
    // Calculate the sides
    int A = (int)pow((X2 - X1), 2)
            + (int)pow((Y2 - Y1), 2);
 
    int B = (int)pow((X3 - X2), 2)
            + (int)pow((Y3 - Y2), 2);
 
    int C = (int)pow((X3 - X1), 2)
            + (int)pow((Y3 - Y1), 2);
 
    // Check Pythagoras Formula
    if ((A > 0 and B > 0 and C > 0)
        and (A == (B + C) or B == (A + C)
             or C == (A + B)))
       
        return true;
 
    else
       
        return false;
}

void solve(){
    ll int  a,b,c,d,e,f;
    
   
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;
    if(a==c||c==e || e==a){
        if(b==d||d==f||f==b){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
    }
//     if(a==c || c==e || e==f) f=true;
//   if(b==d || d==f || f==b)
    
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


