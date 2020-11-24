#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define pb push_back
#define pr pair<int, int>
#define PI 3.1415926535897932384626
#define mod 1000000007
#define fo(i, n) for (i = 0; i < n; i++)
#define endl "\n"
#define mset(m, v) memset(m, v, sizeof(m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
typedef vector<int> vi;
#define FAST_IO                  \
   ios_base::sync_with_stdio(0); \
   cin.tie(NULL);                \
   cout.tie(NULL)

const int N = 100001;

vector<int> ar[N];
int vis[N], c[N];

bool dfs(int v, int k)
{
   vis[v] = 1;
   c[v] = k;
   for (int x : ar[v])
   {
      if (vis[x] == 0)
      {
         bool f = dfs(x, !k);
         if (!f)
            return false;
      }
      else if (c[v] == c[x])
         return false;
   }
   return true;
}

void solve()
{
   int n, m, a, b, i;
   cin >> n >> m;
   for (i = 0; i < n; i++)
   {
      ar[i].clear();
      vis[i] = 0;
   }
   for (i = 1; i <= m; i++)
   {
      cin >> a >> b;
      ar[a].pb(b);
      ar[b].pb(a);
   }
   bool f = true;
   for (i = 1; i <= n; i++)
   {
      if (vis[i] == 0)
      {
         if (!dfs(i, 0))
         {
            f = false;
            break;
         }
      }
   }
   if (f)
      cout << "No suspicious bugs found!" << endl;
   else
      cout << "Suspicious bugs found!" << endl;
}

int32_t main()
{
   FAST_IO;
   int t = 1;
   cin >> t;
   for (int i = 1; i <= t; i++)
   {
      cout << "Scenario #" << i << ':' << endl;
      solve();
   }
   return 0;
}
