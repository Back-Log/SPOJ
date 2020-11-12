#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back

void solve(ll n)
{
  ll ans=0;
  for(ll i=0;i<n;i++)
  {
    ans+=(n-i)*(n-i);
  }
 
 cout<<ans<<endl;
}
int main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   // #ifndef ONLINE_JUDGE
		 //  freopen("input.txt","r",stdin);
	  //   freopen("output.txt","w",stdout);
   // #endif
  ll t;
  cin>>t;
  while(t!=0)
  {
  	solve(t);
  	cin>>t;
  }


  return 0;
}