#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, b, c;

  cin >> a >> b >> c;

  cout << fixed << setprecision(1);
  if ( a+b > c && a+c > b && b+c > a ) cout << "Perimetro = " << a+b+c << endl;
  else cout << "Area = " << (a+b)*c/2 << endl;
  
  return 0;
}