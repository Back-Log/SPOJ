#include<iostream>
using namespace std;
//program to calculate number of trailing Zeros in n!
void solve()
{
	long long int n;cin>>n;
	long long int inc=5;
	long long int ans=0;
	//dividing n by 5,25,125,.......(we are finding how many 5,25,125......in the n!)
	while(n>=inc)
	{
		ans+=(n/(inc+0LL));
		inc*=5;
	}
	
	cout<<ans<<endl;
		
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<endl;
	}
}