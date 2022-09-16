#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007
const ll int N = 1e5 + 7;
bool vis[N];
bool level[N];
vector<int> vec[N];



void bfs(ll int v)
{
    queue<int> q;
    q.push(v);
    vis[v] = true;

    while(!q.empty())
    {
        ll int cur_val = q.front();
        q.pop();
        cout << cur_val << " ";
        for (auto child : vec[cur_val])
        {
            if (!vis[child])
                q.push(child);
            vis[child] = 1;
            level[child] = level[cur_val] + 1;
        }
    }
}

int main()
{
    ll int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        ll int x, y;
        cin >> x >> y;
        vec[x].pb(y);
        vec[y].pb(x);
    }
    bfs(1);

    return 0;
}