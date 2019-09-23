#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long

int main() {
      int t;
      cin>>t;
      int a[4000],b[10001],i, hasal = 0;
      ll sum = 0;
      fo(i, 4000) a[i] = 0;
      a[0] = 1;
      for (int j = 0; j < 10000; j++) {sum=0;
        fo(i, 4000) {
          a[i] = a[i] + a[i] + hasal;
          if (a[i] / 10 != 0) {
            hasal = a[i] / 10;
            a[i] = a[i] % 10;
          } else
            hasal = a[i] / 10;
        }
        fo(i,3109){sum+=a[i];}b[j+1]=sum;
      }
      while(t--)
      {    int n;
           cin>>n;
          
        cout<<b[n]<<endl;
      }
    return 0;
}
