#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1117

using namespace std;

int main()
{
  double n1 = -1, n2 = -1, n;

  while (cin >> n && n2 == -1)
  {
    if ( n >= 0 && n <= 10 && n1 == -1) n1 = n;
    else if ( n >= 0 && n <= 10) n2 = n;
    else cout << "nota invalida" << endl;
  }

  cout << "media = " << fixed << setprecision(2) << (n1+n2)/2 << endl;
  
  return 0;
}