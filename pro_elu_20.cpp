#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define pb(i) push_back(i);

int main() {
  int t, i, temp, hasal = 0;
  cin >> t;
  vector<int> v;
  int a[2600];
  fo(i, 2600) a[i] = 0;
  a[0] = 1;
  for (int i = 1; i < 1001; i++) {
    hasal = 0;
    temp = 0;
    for (int j = 0; j < 2600; j++) {
      a[j] = a[j] * i + hasal;
      hasal = a[j] / 10;
      if (a[j] / 10000 != 0) {
        a[j] %= 10000;
      }
      if (a[j] / 1000 != 0) {
        a[j] %= 1000;
      }
      if (a[j] / 100 != 0) {
        a[j] %= 100;
      }
      if (a[j] / 10 != 0) {
        a[j] %= 10;
      }
    }
    // for(int i=100;i>=0;i--)cout<<a[i];
    // cout<<endl;
    fo(i, 2600) temp += a[i];
    v.pb(temp);
  }
  while (t--) {
    int n;
    cin >> n;
    if (n == 0)
      cout << "1\n";
    else
      cout << v[n - 1] << endl;
  }
}
