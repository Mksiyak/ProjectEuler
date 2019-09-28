#include <bits/stdc++.h>
using namespace std;
#define fo(s,i, n) for (i = s; i < n; i++)
#define ll long long
#define pb(i) push_back(i)
vector<int>nums(10005),ans(10005);
int claculateCycle(int n)
{
 vector<int>v(n,0);
   int x=1,i=0;
   while(++i)
   {
   	 while(x<n)x*=10;
   	 if(x%n==0){return 0;}
   	 if(v[x%n]!=0){return i-v[x%n];}
   	 else v[x%n]=i;
   	 x%=n;
   }
}
void solve()
{
	int N;
	cin>>N;
	cout<<ans[N-1]<<endl;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);int i,maxdigit=0;
    fo(3,i,10002)
    {
    	nums[i]=claculateCycle(i);
    	if(nums[i]>maxdigit)
    	{
    		maxdigit=nums[i];
    		ans[i]=i;
    	}
    	else
    	{
    		ans[i]=ans[i-1];
    	}
    }
  int T=0;cin>>T;
  while(T--)
    {solve();}
}
