#include <iostream>
using namespace std;

int main()
{
  int n, a[10001], g = 1;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for(int i = 0; i < n - 1; i++)
  {
    if(a[i + 1] != a[i])
    {
      g++;
    }
  }

  cout << g;
}
