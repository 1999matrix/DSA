#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
const ll int N = 1e5+7;
vector<int>b;

void subseq(int i , vector<int>a , int k , int sum){
    if(i>=b.size()){
    if(sum==k){
         for(int i=0 ; i<a.size() ; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
       
        return;
    }
    a.pb(b[i]);
    sum+=b[i];
    subseq(i+1 , a , k ,sum);
    a.pop_back();
    sum-=b[i];
    subseq(i+1, a , k ,sum);

    
}

int main(){
 ll int n;
 cin>>n;
 for(int i=0 ; i< n ; i++){
    int x=0;
    cin>>x;
    b.pb(x);
 }
 int i=0;
 vector<int>a;
 subseq(i , a , 2 , 0);
 return 0;
}