 #include<iostream> 
 using namespace std;
#define ll long long
#define fo(i, n) for (i = 0; i < n; i++)
int main() {
    int z;
    cin>>z;
    bool flag = false;
  int a[200], b[50], T = 50, i, j;
  fo(i, 200) a[i] = 0;
  while (T--) {
    char c;
    cin >> c;
    a[49 - T] = c - '0';
  }
  for (int i = 0; i < 25; i++) {
    int swap;
    swap = a[i];
    a[i] = a[49 - i];
    a[49 - i] = swap;
  }
  fo(i, z-1) {
    T = 50;
    while (T--) {
      char c;
      cin >> c;
      b[49 - T] = c - '0';
    }
    for (int i = 0; i < 25; i++) {
      int swap;
      swap = b[i];
      b[i] = b[49 - i];
      b[49 - i] = swap;
    }
    int hasal = 0;
    fo(j, 50) {
      a[j] = b[j] + hasal + a[j];
      if (a[j] / 10 != 0) {
        hasal = a[j] / 10;
        a[j] = a[j] % 10;
      } else
        hasal = 0;
    }
    for (int j = 50; j < 160; j++) {
      a[j] += hasal;
      if (a[j] / 10 != 0) {
        hasal = a[j] / 10;
        a[j] = a[j] % 10;
      } else
        hasal = 0;
    }
  }i=0;
  for (int j = 100; j >= 0; j--) {
    {if(!flag and a[j]==0)continue; else{flag=true; cout << a[j];i++;}if(i==10)break;}
  }
  cout << endl;
}
