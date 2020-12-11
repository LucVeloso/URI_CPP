#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, cont = 0;
  for ( int i = 0; i < 6; i++ ) if (cin >> a && a > 0) cont++;

  cout << cont << " valores positivos" << endl;
  
  return 0;
}