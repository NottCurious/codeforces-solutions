#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int up = 0, down = 0;


  if(up <= down)
  {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  else
  {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
}
