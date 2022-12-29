#include<bits/stdc++.h>
using namespace std;
 

long int SubArraySum(int arr[], int n)
{
    long int result = 0;
 
  
    for (int i=0; i<n; i++)
        result += (arr[i] * (i+1) * (n-i));
 
    
    return result ;
}
 

int main()
{
    int t;
    cin>>t;
    
    
    while(t--){
        
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout 
          << SubArraySum(arr, n) << endl;
        
    }
    

    return 0;
}