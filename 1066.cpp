#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, par = 0, impar = 0, p = 0, n = 0;
  for ( int i = 0; i < 5; i++ )
  {
    cin >> a;

    if (a%2 == 0) par++;
    else impar++;

    if (a > 0) p++;
    else if (a < 0) n++;
  } 

  cout << par << " valor(es) par(es)" << endl;
  cout << impar << " valor(es) impar(es)" << endl;
  cout << p << " valor(es) positivo(s)" << endl;
  cout << n << " valor(es) negativo(s)" << endl;
  
  return 0;
}