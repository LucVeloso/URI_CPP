#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1101

using namespace std;

int main()
{
  int m, n, z;

  while (cin >> m >> n && m > 0 && n > 0)
  {
    int s = 0;

    if (m > n)
    {
      z = m;
      m = n;
      n = z;
    }

    for (int i = m; i <= n; i++)
    {
      cout << i << " ";
      s += i;
    }

    cout << "Sum=" << s << endl;
  } 
  
  return 0;
}