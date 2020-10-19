#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int n;
   cin>>n;
   vector<int>ans;
   ans.pb(1);
   int carry=0;
   int prod;
   int mul=2;
   for(mul=2;mul<=n;mul++)
   {
   for(int i=0;i<ans.size();i++)
   {
    prod=ans[i]*mul+carry;
    ans[i]=prod%10;
    carry=prod/10;

   }
   while(carry>0)
   {
   	ans.pb(carry%10);
   	carry/=10;
   }

}

for(int i=ans.size()-1;i>=0;i--)
{
	cout<<ans[i];
}
cout<<"\n";

 }



	return 0;
}