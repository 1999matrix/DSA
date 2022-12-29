#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb emplace_back
const unsigned int M = 1000000007;
#define tc int tc; cin>>tc;while(tc--)
ll smallestDivisor(ll n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}
void solve(){
 ll n,k; string s;
 cin>>n>>k;
 if(abs(n-k)==1){cout <<-1<<'\n'; return;}
 if(!(n&1) && !(k&1)) cout << 0<<'\n';
 else if( n&1 && k&1){
    ll a= min(n, k);
    ll b= max(n, k);
    if(b%a ==0 ) cout <<0<<'\n';
    else cout << 1<<'\n';
 }
 else{
    ll a= min(n, k);
    ll b= max(n, k);
    ll diff = b-a;
    ll k1 = smallestDivisor(diff);
    cout << ceil((float)a/k1)*k1 - a<<'\n';
 }
}
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
tc
{
solve();
}
}