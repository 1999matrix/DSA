// // took max from first array, and stored second array in multiset. iterated on multi set, subtracting mx - k and k - i. If mx <= 0 print YES, else continue


#include<bits/stdc++.h>
using namespace std;
#define rpn(i,n) for(i=0;i<n;i++)
#define rpn2(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define eb emplace_back
#define pb push_back
#define read(n) cin>>n
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
ll int pr(ll int a , ll int n){
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

vector<string> solve(vector<string> &vec){
    ll int n,k;
    
    cin>>n>>k;
    int i=0;
    vector<int> h(n) , p(n);
    vector<pair<int , int>> hp;
   
    rpn(i,n){
        cin>>h[i];
    }
    i=0;
    
    rpn(i,n){
       cin>>p[i];
    }
    i=0;
    rpn(i,n){
     hp.pb({p[i] , h[i]});
    }

 priority_queue<pair<int , int> , vector<pair<int , int >> , greater<pair<int , int>>>pq;
 i=0;
 rpn(i ,n){
    pq.push({p[i] , h[i]});

 }
ll int ans=k;
while(k>0 && !pq.empty()){
    while(!pq.empty()&& pq.top().second<=ans)
    pq.pop();
    k-=pq.top().first;
    ans+=k;
}
if(pq.empty()){
    vec.pb("YES");
}
else{
    vec.pb("NO");
}
return vec;
    sort(all(hp));
    i=0;
    // rpn(i,n){
    //     h[i] = hp[i].second;
    //     p[i] = hp[i].first;
    // }
    vector<int> m(n);
    m[n-1] = p[n-1];
    m[n-1] = hp[n-1].first;
    for(int i=n-2 ; i>=0 ; i--){
        
        m[i]=  min(m[i-1] , hp[i].first);
    }
    int pr = 0;
    ll int index = 0;
    bool pass = 0;
    while(k>0){
        pr+=k;
        index = upper_bound(all(h) , pr) - h.begin();
        if(index==n){
            pass =1;
            break;
        }
        k-=m[index];
    }
    // if(pass) cout<<"YES"<<endl;
    //  else cout<<"NO"<<endl;
     if(pass) {
        vec.pb("YES");
     }
     else{
        vec.pb("NO");
     }
     return vec;
//        ll int a=0;
//     rpn(i,n){
//        if(i==0){

//         a= ((hp[i].second) / k)+((hp[i].second) % k !=0);
//            k= k-hp[i].first;
//        }
//        else{

//    if(hp[i].second - k*a  <=0) continue;
//    else{
//      a= ((hp[i].second) / k)+((hp[i].second) / k !=0);
//      k=k-hp[i].first;
//    }

//     }
//    if(k==0) {
//     cout<<"NO"<<endl;
//     return;
//    }
   
//        }
//    if(k !=0) cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;

}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t = 1;
    cin >> t;
      vector<string> vec;
    while(t--) {
        solve(vec);
    }
    
    for(int i=0 ; i<vec.size() ; i++){
        cout<<vec[i]<<endl;
    }

    return 0;
}














