#include <iostream>
using namespace std;

#define ll long long

int main()
{
  int n, z = 0, greatest = 0;
  string s;
  cin >> n >> s;

  for(int i = 0; i < n - 1; i++)
  {
    if(s[i + 1] == s[i])
    {
      z++;
    }
    else
    {
      greatest = z;
      z = 0;
    }
  }

  cout << greatest;
}
