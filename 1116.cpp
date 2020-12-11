#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1116

using namespace std;

int main()
{
  int n;  cin >> n;
  
  while (n--)
  {
    double x, y;

    cin >> x >> y;

    cout << fixed << setprecision(1);
    if ( y == 0 ) cout << "divisao impossivel" << endl;
    else cout << x/y << endl;  
  }
  
  return 0;
}