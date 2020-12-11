#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, b = 0, cont = 0;
  for ( int i = 0; i < 6; i++ ) 
  {
    if (cin >> a && a > 0 )
    {
      cont++;
      b += a;
    } 
  }
  cout << cont << " valores positivos" << endl;
  cout << fixed << setprecision(1) << b/cont << endl;
  
  return 0;
}