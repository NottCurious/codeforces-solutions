// Written By Deepesh Nimma
// Problem: 405A
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubblesort(int a[], int n)
{
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n - i - 1; j++)
    {
      if(a[j + 1] < a[j])
      {
        swap(&a[j + 1], &a[j]);
      }
    }
  }
}

int main()
{
  int a[100];
  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  bubblesort(a, n);

  for(int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
