#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
string s[91];
   
 string spell(int number) 
 {
   string ret;
   if(number/100!=0){ret+=(s[number/100]+" Hundred ");}number%=100;
   if(number<20 & number!=0)ret+=(s[number]+" ");
   if(number>=20){ret+=(s[(number/10)*10]+" ");number%=10;if(number>0)ret+=(" "+s[number]+" ");}
   return ret;
 }
 int main() {
      s[1]="One";s[2]="Two";s[3]="Three";s[4]="Four";s[5]="Five";s[6]="Six";s[7]="Seven";s[8]="Eight";s[9]="Nine";s[10]="Ten";s[11]="Eleven";s[12]="Twelve";s[13]="Thirteen";s[14]="Fourteen";s[15]="Fifteen";s[16]="Sixteen";s[17]="Seventeen";s[18]="Eighteen";s[19]="Nineteen";s[20]="Twenty";s[30]="Thirty";s[40]="Forty";s[50]="Fifty";s[60]="Sixty";s[70]="Seventy";s[80]="Eighty";s[90]="Ninety";

int t;ll ans=0;
cin>>t;
while(t--)
{
    long long number=t;
    cin>>number;
    if(number ==0 ){cout<<"Zero\n";continue;}
    string s;
    for(int i=3;i>=0;i--)
    {   //cout<<number/pow(1000,i);
        int temp=number/pow(1000,i);
        if(i==3 and temp!=0){s+=(spell(temp)+" Billion ");}
        else if(i==2 and temp!=0){ s+=(spell(temp)+" Million ");}
        else if(i==1 and temp!=0){ s+=(spell(temp)+" Thousand ");}
        else if(i==0 and temp!=0){ s+=(spell(temp));}
       number%=(ll)pow(1000,i);

    }

  for(int i=0;i<s.length();i++){if(s[i]==' ' and s[i+1]==' ')continue;else putchar(s[i]);}
  printf("\n");
}
 }
