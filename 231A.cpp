// Written By Deepesh Nimma
// Problem: 231A Codeforces
#include <iostream>
using namespace std;

#define ll long long

int main()
{
  int t, s = 0;
  cin >> t;

  while(t--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if(a + b + c >= 2)
    {
      s++;
    }
  }

  cout << s;
}
