// Written By Deepesh Nimma
// Problem: 677A Codeforces
#include <iostream>
using namespace std;

#define ll long long

int main()
{
  int n, h, a[1001], sum = 0;
  cin >> n >> h;

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    if(a[i] > h)
    {
      sum += 2;
    }
    else
    {
      sum += 1;
    }
  }
  cout << sum;
}
