#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
const ll int N = 1e5+7;
vector<int>b;

void subseq(int i , vector<int>a){
    
    if(i>=b.size()){
        for(int i=0 ; i<a.size() ; i++){
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
        return;
    }
    a.pb(b[i]);
    subseq(i+1 , a);
    a.pop_back();
    subseq(i+1, a);

    
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
 subseq(i , a);
 return 0;
}