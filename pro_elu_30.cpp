#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,v,e) for(v=i;v<e;v++)
#define mod 1000000007
int ans[6]={0,0,0,0,0,0},a[6];
void resolve()
{
    for(int i=0;i<6;i++){if(a[i]!=0){ans[6-i]++;return;}}
}
void solve()
{  
  int n,xxx=0;cin>>n;
  fo(0,a[0],10)
  {
      fo(0,a[1],10)
      {
          fo(0,a[2],10)
          {
              fo(0,a[3],10)
              {
                  fo(0,a[4],10)
                  {
                      fo(0,a[5],10)
                      {   int temp=0,temp1=0;
                          for(int i=0;i<6;i++){temp+=pow(a[i],n);temp1+=a[i]*pow(10,5-i);}
                          if(temp1==temp){xxx+=temp;resolve();}
                      }
                  }
              }
          }
      }

  }
  cout<<xxx-1;
}
int main()
{
    int T=1;//cin>>T;669171001
    while(T--)
    {solve();}
}
