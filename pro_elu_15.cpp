#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define mod 1000000007
using namespace std;

/*int ncr(int n,int r)
{
if(r==0 or r==n )return 1;
else return (ncr(n-1,r-1)%mod+ncr(n-1,r)%mod)%mod;
}*/
long long ncr(int n, int r, long long p=mod) {
  long long C[r + 1];
  for(int i=0;i<r+1;i++)C[i]=0;

  C[0] = 1;
  for (int i = 1; i <= n; i++) {
     for (int j = min(i, r); j > 0; j--)
     C[j] = (C[j] + C[j - 1]) % p;
  }
  return C[r];
}

int main() {

   int T;
   cin>>T;

   while(T--)
   {  int m,n;
       cin>>n>>m;
       int high = n+m,low = max(n,m);
      cout<<ncr(high,low)<<endl;
}   
    return 0;
}
