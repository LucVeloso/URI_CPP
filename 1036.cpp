#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, b, c, d;

  cin >> a >> b >> c;

  d = b*b-4*a*c;
  if ( d < 0 || a == 0) cout << "Impossivel calcular" << endl;
  else cout << fixed << setprecision(5) << "R1 = " << (-b+sqrt(d))/(2*a) << endl << "R2 = " << (-b-sqrt(d))/(2*a) << endl;
  
  return 0;
}