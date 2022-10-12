
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
#define vi vector<ll int> 
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
//=======================

   ll int character[26];


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
int petition(vi &x,ll int y) {
   ll int res=0;
   priority_queue<ll int> pq;

   for(int i= 0 ; i<10 ; i++){
             pq.push(i);
   }

   ll int s=y;
    while(s!=-1) {
        res =res+1;
        s=x[s];
        if(s==y){
           return res; 
        } 
    }
    return -1;
}

ll int lcm(ll int a, ll int b){
return (a*b)/(gcd(a,b));
}

//=======================

void jaqen(){
      ll int n=0; 
      cin>>n;
      
    string x; 
    cin>>x;
    char arr[n];
    for(int i=0 ; i< n ; i++){
        arr[i]=x[i];
    }
    vi place(26,0);
map<char ,  int> mp;
    for(int i=0; i<26; i++) {
        mp.insert({char(i) , i});
        place[i]=-1;
        character[i]=1;
    }
    priority_queue<char> ch;
ll int count=0;
    priority_queue<ll int> alpha;
    for(int i=0; i<n; i++) {
        if(i%2){
   count++;
        }
        ch.push(i);

    if(place[x[i]-'a']==-1)  {

        for(int k=0; k<26; k++) {

        if(character[k]!=0 and k!=x[i]-'a') {
                place[x[i]-'a']=k;
               ll int q=petition(place,k);
               alpha.push(i);
                    if(q!=-1 and q!=26)
                    continue;
                    else {
                        character[k]=0;
                        break;
                    }
                }
            }
        }
       if(i+1 %2) count++; 
        cout<<char(place[x[i]-'a']+'a');
        mp.insert({'a' , x[i]});
    }
    cout<<endl;
}
    

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
     
        jaqen();
    }

    return 0;
}