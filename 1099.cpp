#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1099

using namespace std;

int main()
{
  int n;  cin >> n;
          
  while (n--)
  {
    int x, y, z, s = 0;

    cin >> x >> y;

    if (x > y)
    {
      z = x;
      x = y;
      y = z;
    }

    for (int i = x+1; i < y; i++) if (i % 2) s += i;

    cout << s << endl;  
  }
  
  return 0;
}