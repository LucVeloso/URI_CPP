#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1118

using namespace std;

int main()
{
  double n1 = -1, n2 = -1, n;
  int r = 1;

  while (r != 2)
  {
    while (n2 == -1 && cin >> n )
    {
      if ( n >= 0 && n <= 10 && n1 == -1) n1 = n;
      else if ( n >= 0 && n <= 10)
      {
        n2 = n;
        break;
      } 
      else cout << "nota invalida" << endl;
    }

    cout << "media = " << fixed << setprecision(2) << (n1+n2)/2 << endl;

    while ( true )
    {
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> r;
      if (r == 1 || r == 2)
      {
        n1 = -1; n2 = -1;
        break;
      } 
    }
  }

  return 0;
}