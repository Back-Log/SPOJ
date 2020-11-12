#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back

void solve(int arr[],int t)
{
	int sum=0;
  for(int i=0;i<t;i++)
  {
   sum+=arr[i];
  }
  if(sum%t!=0)cout<<-1<<endl;
  else
  {
     int rem=sum/t;
     int ans=0;
     for(int i=0;i<t;i++)
     {
     	if(arr[i]>=rem)
     	{
     		ans+=(arr[i]-rem);
     	}
     }
    cout<<ans<<endl;

  }
 



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
  while(true)
  {
  	cin>>t;
  	if(t==-1)break;
  	int arr[t];
  	for(int i=0;i<t;i++)
  	{
  		cin>>arr[i];
  	}
  	solve(arr,t);
  }


  return 0;
}