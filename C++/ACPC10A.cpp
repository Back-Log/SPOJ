#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back

void solve(int a,int b,int c)
{
  if(b-a == c-b)
  {
  	cout<<"AP "<<c+(c-b);
  }
  else
  {
  	cout<<"GP "<<c*(c/b);
  }
 
cout<<endl;


}
int main()
{ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   // #ifndef ONLINE_JUDGE
		 //  freopen("input.txt","r",stdin);
	  //   freopen("output.txt","w",stdout);
   // #endif
  int t;
  t=1;
  while(t)
  {
  	int a,b,c;
  	cin>>a>>b>>c;
  	if(a==0 and b==0 and c==0)break;
  	solve(a,b,c);
  }


  return 0;
}