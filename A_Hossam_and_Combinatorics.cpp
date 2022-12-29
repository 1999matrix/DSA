#include<bits/stdc++.h>
using namespace std;


//=======================

void solve(){
    long long  int n;
    cin>>n;
    long long int arr[n];
    long long  int maxi=INT_MIN;
    long long  int mini=INT_MAX;
    for(int i=0 ; i< n ;i++){
        cin>>arr[i];
        maxi= max(arr[i] , maxi);
        mini= min(arr[i] , mini);
    }
    long long  int d1=0 , d2=0;
    for(int i=0 ; i< n ;i++){
        if(arr[i]==maxi) d1++;
        if(arr[i]==mini) d2++;
    }
   
    if(d1==n || d2==n) {
        cout<<n*(n-1)<<endl;
    }
    else{
         cout<<2*(d1*d2)<<endl;
    }
    
    
    
   
  
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