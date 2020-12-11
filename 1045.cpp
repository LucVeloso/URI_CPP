#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, b, c;
  double maior, medio, menor;

  cin >> a >> b >> c;

  if (a >= b && a >= c)
  {
    maior = a;

    if (b >= c)
    {
      medio = b; 
      menor = c;
    }
    else 
    {
      medio = c; 
      menor = b;
    }
  }
  else if (b >= a && b >= c)
  {
    maior = b;

    if (a >= c)
    {
      medio = a; 
      menor = c;
    }
    else 
    {
      medio = c; 
      menor = a;
    }
  }
  else 
  {
    maior = c;

    if (a >= b)
    {
      medio = a; 
      menor = b;
    }
    else 
    {
      medio = b; 
      menor = a;
    }
  }

  a = maior;
  b = medio;
  c = menor;

  if ( a >= b+c ) cout << "NAO FORMA TRIANGULO" << endl;
  else 
  {
  if ( a*a == b*b+c*c ) cout << "TRIANGULO RETANGULO" << endl;
  if ( a*a > b*b+c*c ) cout << "TRIANGULO OBTUSANGULO" << endl;
  if ( a*a < b*b+c*c ) cout << "TRIANGULO ACUTANGULO" << endl;
  if ( a == b && b == c ) cout << "TRIANGULO EQUILATERO" << endl;
  if ( (a == b && a != c) || (a == c && a != b) || (b == c && b != a) ) cout << "TRIANGULO ISOSCELES" << endl;
  }

  return 0;
}