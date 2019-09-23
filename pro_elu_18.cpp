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
  int t, i, temp;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v[n];
    fo(i, n) {
      for (int j = 0; j < i + 1; j++) {
        cin >> temp;
        v[i].pb(temp);
      }
    }
    // fo(i,n){for(int j=0;j<i+1;j++)cout<<v[i][j];}
    for (int i = n - 2; i >= 0; i--) {
      for (int j = 0; j < i + 1; j++) {
        v[i][j] += (max(v[i + 1][j], v[i + 1][j + 1]));
      }
    }
    cout << v[0][0] << endl;
  }
}
