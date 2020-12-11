#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  a *= 60; a += b;
  c *= 60; c += d;

  if ( a == c ) cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
  else if ( a > c ) cout << "O JOGO DUROU " << (1440-a+c)/60 << " HORA(S) E " << (1440-a+c)%60 << " MINUTO(S)" << endl;
  else cout << "O JOGO DUROU " << (c-a)/60 << " HORA(S) E " << (c-a)%60 << " MINUTO(S)" << endl;
  
  return 0;
}