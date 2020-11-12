#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 1e9+7
#define MIN -1e9-7
#define mem memset(a, 0, sizeof(a))
#define pb push_back
char opr[]={'+','-','*','/','^'};
bool search(char c)
{
  for(int i=0;i<5;i++)
  {
  	if(c==opr[i])
  	{
  		return true;
  	}
  }

return false;

}
map<char,int>mp;

void solve()
{
  string st;
  cin>>st;
  stack<char>s;
  char c;
  /*
  3
(a+(b*c))
((a+b)*(z+x))
((a+t)*((b+(a+c))^(c+d)))
*/

  for(int i=0;i<st.size();i++)
  {
     c=st[i];
     if(search(c) or c==')' or c=='(')
     {
        if(c=='(')s.push(c);
        else if(c==')')
        {
        	while(s.top()!='(')
        	{
        		cout<<s.top();
        		s.pop();
        	}
        	s.pop();
        }
        else if(search(c))
        {
        	if(search(s.top()))
        	{
        		if(mp[c]>mp[s.top()])
        		{
        			s.push(c);
        		}
        		else
        		{
        			while(mp[c]<=mp[s.top()] and !s.empty())
        			{
        				cout<<s.top();
        				s.pop();
        			}
        		}


        	}
        	else
        	{
        		s.push(c);
        	}
        }


     }
     else
     {
     	cout<<c;
     }
    

  }
  while(!s.empty())
  {
  	cout<<s.top();
  	s.pop();
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
  cin>>t;
  while(t--)
  {
  	solve();
  }
mp['+']=0;
mp['-']=0;
mp['*']=1;
mp['/']=1;
mp['^']=2;

  return 0;
}