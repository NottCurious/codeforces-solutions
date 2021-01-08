#include <iostream>
using namespace std;

int main()
{
  int n, a[10001];
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int z = (n - 1) / 2;
  // if(n % 2 == 0)
  // {
  //   z = n / 2;
  // }
  // else
  // {
  //   z = (n + 1) / 2;
  // }

  int d = 0, s = 0;

  for(int i = 0; i < z; i++)
  {
    d += a[i];
  }

  for(int i = z; i < n; i++)
  {
    s += a[i];
  }

  // cout << d << " " << s;
  cout << s << " " << d;
}
