#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1131

using namespace std;

int main()
{
  int i, g, gi = 0, gg = 0, vi = 0, vg = 0, e = 0, j = 0;
  int r = 1;

  while (r != 2)
  {
    while (cin >> i >> g)
    {
      j++;
      gi += i;
      gg += g;
      
      if (i == g) e++;
      else if (i > g) vi++;
      else vg++;

      while ( true )
      {
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> r;
        if (r == 1 || r == 2)  break;
      }
    }
  }

  cout << j << " grenais" << endl;
  cout << "Inter:" << vi << endl;
  cout << "Gremio:" << vg << endl;
  cout << "Empates:" << e << endl;

  if (vi == vg) cout << "Nao houve vencedor" << endl;
  else if (i > g) cout << "Inter venceu mais" << endl;
  else cout << "Gremio venceu mais" << endl;
  
  return 0;
}