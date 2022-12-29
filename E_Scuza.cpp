#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i,b,c,j,flag,ff,pos,k,ans,q;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n>>q;
        ll a[n],prefmaxi[n],prefsum[n];
        cin>>a[0];
        prefmaxi[0]=prefsum[0]=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            prefmaxi[i]=max(prefmaxi[i-1],a[i]);
            prefsum[i]=a[i]+prefsum[i-1];
        }
        while(q--)
        {
            cin>>k;
            b=(upper_bound(prefmaxi,prefmaxi+n,k)-prefmaxi);
            cout<<"k= "<<k<<" "<<"b= "<<b<<endl;
            if(b==0)
            {
                cout<<"0 ";
                continue;
            }
            cout<<prefsum[b-1]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}