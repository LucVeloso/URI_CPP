#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1132

using namespace std;

int main()
{
  long long int x, y, z = 0;

  cin >> x >> y;

  if (x > y)
  {
    z = x;
    x = y;
    y = z;
    z = 0;
  }

  for (int i = x; i <= y; i++) if (i % 13 != 0) z += i;

  cout << z << endl;
  
  return 0;
}