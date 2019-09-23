#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define pb(i) push_back(i)
vector<string> s;
vector<ll> sl;
void swap(char* s1,char*s2)
{
  char* swap;
  swap = s2;
  s2 = s1;
  s1 = swap;
}
string addstrings(string s1,string s2)
{
  if(s1.length()<s2.length())swap(s1,s2);
  int n = s1.length(),carry = 0,que=s1.length()-s2.length();
  for(int i=n-1;i>=0;i--)
  { 
    if(i>=que)
    {
       int sum = carry+s1[i]-'0'+s2[i-que]-'0';
       carry = sum/10;
       s1[i] = ((sum%10)+'0');
    }
    else
    {
       int sum = carry+s1[i]-'0';
       carry = sum/10;
       s1[i] = ((sum%10)+'0');
    }
  }
  if(carry)
    s1 = (char)(carry+'0')+s1;
  return s1;
}
void solve()
{
  int n;
  cin>>n;
  cout<<sl[n-1]<<endl;
}
int main() {
  string first = "1",second = "1";
  s.pb(first);ll xx=1;sl.pb(1);
  while(s.size()<5002)
  { xx++;
    string temp = addstrings(first,second);
    if(temp.length()>s.size()){s.pb(temp);sl.pb(xx+1);}
    first = second;
    second=temp;
  }
  int T;cin>>T;
  while(T--)
    {solve();}
}
