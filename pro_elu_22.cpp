#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
int find(string arr[], int len, string seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek) return i+1;
    }
    return -1;
}
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;cin>>n;
   string a[n];fo(n)cin>>a[i];
   sort(a,a+n);
   int q;cin>>q;
   fo(q)
   {
       string ss;cin>>ss;int scr=0,sz=ss.size();
      for(int j=0;j<sz;j++){scr+=(ss[j]-'A'+1);}
      size_t x = find(a,n, ss);
      cout<<scr*x<<'\n';
   }
    return 0;
}
