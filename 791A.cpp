// Written By Deepesh Nimma
// Problem: 791A Codeforces
#include <iostream>
using namespace std;

#define ll long long

int main()
{
  ll l, b, i = 0;
  cin >> l >> b;

  while(b >= l)
  {
    l *= 3;
    b *= 2;
    i++;
  }

  cout << i;
}
