#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,v,e) for(v=i;v<e;v++)
#define mod 1000000007
ll get(ll n)
{return (n%3==0?n/3:n);}
void solve()
{   
    ll n,ans=1;;cin>>n;
    if(n==1){cout<<"1\n";return;}
    n++;n/=2;
    ll pahla = ((((get(n)%mod)*(get(n+1)%mod))%mod*(get(2*n+1)%mod))%mod*8)%mod;
    ll dusra = (((n%mod)*((n+1)%mod))%mod*14)%mod;
    ll tisra = (16*(n%mod))%mod;
    ans = pahla-dusra+tisra-3;
    ans%=mod;
    if(ans<0)ans+=mod;
    cout<<ans<<endl;

}
int main()
{
    int T=1;cin>>T;
    while(T--)
    {solve();}
}
