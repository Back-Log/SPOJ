#include <bits/stdc++.h>
using namespace std;
#define int long long
// Using divide and conquer approach to count the number of inversions
int merge(int arr[],int s,int e)
{
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	int temp[200005];
	int count=0;
	while(i<=mid and j<=e)
	{
		if(arr[i]<=arr[j])
		{
			temp[k++]=arr[i++];
		}
		else
		{
			temp[k++]=arr[j++];
			//so the array is sorted ,we are directly calculating the number of inversions 
			count+=mid-i+1;
		}
	}
	while(i<=mid)
	{
		temp[k++]=arr[i++];
	}
	while(j<=e)
	{
		temp[k++]=arr[j++];
	}
	for(int i=s;i<=e;i++)
	{
		arr[i]=temp[i];
	}
	return count;
 
}
int inversion_count(int arr[],int s,int e)
{
	if(s>=e)
	{
	  return 0;
	}
	int mid=(s+e)/2;
	// after calculating the mid point we are dividing the array
	int x=inversion_count(arr,s,mid);
	int y=inversion_count(arr,mid+1,e);
	//calling merge function to merge the array
	int cross_in=merge(arr,s,e);
	return x+y+cross_in;
	
}
int32_t main() {
	 #ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
        #endif
    int t;
    cin>>t;
    while(t--)
    {
     cin.get();
    int n;
    cin>>n;
    int arr[200005];
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=inversion_count(arr,0,n-1);
    cout<<ans<<endl;
    }
	return 0;
}
