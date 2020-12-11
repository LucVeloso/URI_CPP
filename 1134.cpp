#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1134

using namespace std;

int main()
{
  int r = 0, a = 0, g = 0, d = 0;

  while (r != 4 && cin >> r)
  {
    switch (r)
    {
    case 1: a++;
    break;
    case 2: g++;
    break;
    case 3: d++;
    break;
    default:
    break;
    }
  } 

  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << a << endl;
  cout << "Gasolina: " << g << endl;
  cout << "Diesel: " << d << endl;
  
  return 0;
}