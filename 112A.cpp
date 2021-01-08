// Written By Deepesh Nimma
// Problem: 112A
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

void swap(char *a, char *b)
{
  char temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  string s, r;
  cin >> s >> r;
  // int n;

  transform(s.begin(), s.end(), s.begin(), ::tolower);
  transform(r.begin(), r.end(), r.begin(), ::tolower);

  for(int i = 0; i < s.size(); i++)
  {
    for(int j = 0; j < s.size() - i - 1; j++)
    {
      if(s[j + 1] < s[j])
      {
        swap(&s[j + 1], &s[j]);
      }
    }
  }

  for(int i = 0; i < s.size(); i++)
  {
    for(int j = 0; j < s.size() - i - 1; j++)
    {
      if(r[j + 1] < r[j])
      {
        swap(&r[j + 1], &r[j]);
      }
    }
  }

  // int z = 0;
  //
  // for(int i = 0; i < s.size(); i++)
  // {
  //   if(s[i] > r[i])
  //   {
  //     z += 1;
  //   }
  // else if(s[i] < r[i])
  //   {
  //     z += -1;
  //   }
  //
  // }
  // if(z > 0)
  // {
  //   cout << 1;
  // }
  // else if(z < 0)
  // {
  //   cout << -1;
  // }
  // else
  // {
  //   cout << 0;
  // }
  if(s == r)
  {
    cout << 0;
  }
  else if(s > r)
  {
    cout << 1;
  }
  else if(s < r)
  {
    cout << -1;
  }

  return 0;
  // cout << s << " " << r;
}
