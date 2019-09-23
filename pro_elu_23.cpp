#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;
#define pb(i) push_back(i)
vector<int>v;
int sumOfDivisors(int n)
{   int ans=0;
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i==0){
            ans+=i;
            if(n/i!=0)ans+=n/i;
        }
    }
return ans-n;
 }
void isAbundant(int n)
{
for(int i=10;i<=n;i++)
{   int xx=sumOfDivisors(i);
   // cout<<i<<' '<<xx<<endl;
    if(xx>i)v.pb(i);
}
}
bool twopointer(int n)
{
int sz = v.size(),front=0,last = sz-1;
while(front<=last)
{if(v[front]+v[last]==n)return true;
else if((v[front]+v[last]<n))front++;
else last--;
}
return false;
}
int main() {
    isAbundant(28123);
    //for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
    int T=0;cin>>T;
    while(T--)
    {
        int temp;cin>>temp;
        if(temp==0){cout<<"NO\n";}
        else if(temp>28123){cout<<"YES\n";}
        else if(twopointer(temp))cout<<"YES\n";
        else cout<<"NO\n";
    }  
    return 0;
}
