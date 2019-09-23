#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N=13;
bool flag[13];
char getchar(int n)
{   
    for(int i=0;i<N;i++)
    {  //cout<<n<<' '<<(char)('a'+i)<<endl;
        if(flag[i])n++;
        if(n==i){flag[i]=true;return 'a'+i;}
    }
    return '0';
}
ll factr(int n)
{
    if(n==0 or n==1)return 1;
    return n*factr(n-1);
}
void solve()
{
ll n;cin>>n;n--;
for(int i=1;i<=N;i++)
{
ll factn = factr(N-i);
ll temp = n/factn;
n%=factn;
cout<<getchar(temp);
}
cout<<endl;
}
int main() {
  int T;
  cin>>T;
 while(T--)
{memset(flag,false,N);solve();}
}
