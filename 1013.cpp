#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c;

  cin >> a >> b >> c;
  
  a = a > b ? a : b;
  a = a > c ? a : c;

  cout << a << " eh o maior"<< endl;
  
  return 0;
}