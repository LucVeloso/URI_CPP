#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a1, a2, b1, b2;
  double c1, c2;

  cin >> a1 >> b1 >> c1;
  cin >> a2 >> b2 >> c2;

  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (float)b1*c1+b2*c2 << endl;
  
  return 0;
}