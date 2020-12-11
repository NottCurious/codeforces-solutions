// Written By Deepesh Nimma
// Problem: 734A Codeforces
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int awins = 0, dwins = 0;

  for(int i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    if(c == 'A')
    {
      awins++;
    }
    else
    {
      dwins++;
    }
  }

  if(awins > dwins)
  {
    cout << "Anton";
  }
  else if(dwins > awins)
  {
    cout << "Danik";
  }
  else
  {
    cout << "Friendship";
  }
}
