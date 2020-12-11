#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1133

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

  for (int i = x+1; i < y; i++) if (i % 5 == 2 || i % 5 == 3) cout << i << endl;
    
  return 0;
}