// Written By Deepesh Nimma
// Problem: 263A Codeforces
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[5][5], s;

  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cin >> a[i][j];

      if(a[i][j] == 1)
      {
        s = abs(i-3)+abs(j-3);
      }
    }
  }
  cout << s;

}
