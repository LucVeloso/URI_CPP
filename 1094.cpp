#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1094

using namespace std;

int main()
{
  double c = 0, r = 0, s = 0;
  int n; cin >> n;

  while (n--)
  {
    double m; cin >> m;
    char a; cin >> a;

    switch (a)
    {
      case 'C': c += m;
      break;
      case 'R': r += m;
      break;
      case 'S': s += m;
      break;
    }
  }

  cout << "Total: " << c+r+s << " cobaias" << endl;
  cout << "Total de coelhos: " << c << endl;
  cout << "Total de ratos: " << r << endl;
  cout << "Total de sapos: " << s << endl;
  cout << fixed << setprecision(2);
  cout << "Percentual de coelhos: " << (c/(c+r+s))*100 << " %" << endl;
  cout << "Percentual de ratos: " << (r/(c+r+s))*100 << " %" << endl;
  cout << "Percentual de sapos: " << (s/(c+r+s))*100 << " %" << endl;
  
  return 0;
}