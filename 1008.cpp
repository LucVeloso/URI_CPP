#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, h;
  double ph;

  cin >> n >> h >> ph;

  cout << "NUMBER = " << n << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << (float)ph*h << endl;
  
  return 0;
}