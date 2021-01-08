// Written by Deepesh Nimma
// Problem: 236A
#include <iostream>
using namespace std;

void swap(char *a, char *b)
{
  char temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  string s;
  char r[2000];
  int z = 0;
  cin >> s;

  for(int i = 0; i < s.size(); i++)
  {
    for(int j = 0; j < s.size() - i - 1; j++)
    {
      if(s[j + 1] > s[j])
      {
        swap(&s[j+1], &s[j]);
      }
    }
  }

  for(int i = 0; i < s.size() - 1; i++)
  {
    if(s[i + 1] != s[i])
    {
      r[z] = s[i];
      z++;
    }
  }
  string c = r;
  // cout << c.size();

  if(c.size() % 2 != 0)
  {
    cout << "CHAT WITH HER!";
  }
  else
  {
    cout << "IGNORE HIM!";
  }
}
