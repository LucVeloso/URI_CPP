#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1115

using namespace std;

int main()
{
  int x, y;

  while (cin >> x >> y && x != 0 && y != 0)
  {
    if (x > 0 && y > 0) cout << "primeiro" << endl;
    else if (x < 0 && y > 0) cout << "segundo" << endl;
    else if (x < 0 && y < 0) cout << "terceiro" << endl;
    else cout << "quarto" << endl;
  }
  
  return 0;
}