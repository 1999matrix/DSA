#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
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

void solve(){
    
    ll int n;
    cin>>n;
    ll int arr[n];
 for(int i=0 ; i<n ; i++){
  cin>>arr[i];
 }
    for(int i=0 ; i<n-1 ; i++){
        
        if(arr[i]>0 && arr[i+1]>0 ){
            if(arr[i]==1 && arr[i+1]==1){
           arr[i+1] = arr[i+1]-2;
            arr[i] = arr[i]-1;
            }

     if(arr[i+1]>0 && arr[i]>0){
        ll int x=arr[i+1];
         arr[i+1]= arr[i+1]-(arr[i+1]/2)*2;
          arr[i]= arr[i]-(x/2)*1;
     }
        
      }
        
   

        else if(arr[i]<=0 && arr[i+1]>0){
             ll int x=arr[i+1];
           arr[i+1] = arr[i+1]-(arr[i+1]/2)*2;
            arr[i] = arr[i]-(x/2)*1;
        
           }
           else{
            continue;
           }
        }
   
   


    ll int sum=0;
    for(int i=0 ; i<n ; i++){
        // cout<<arr[i]<<" ";
          sum+=abs(arr[i]);
    }
    // cout<<endl;
    cout<<sum<<endl;

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