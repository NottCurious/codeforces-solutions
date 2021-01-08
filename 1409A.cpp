#include <iostream>
using namespace std;

#define ll long long

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    ll a, b;
    cin >> a >> b;

    cout << (b / a) - 1 << endl;
  }
}
