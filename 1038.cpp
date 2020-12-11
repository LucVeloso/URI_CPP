#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;
  double c[5] = {4, 4.5, 5, 2, 1.5};

  cin >> a >> b;

  cout << "Total: R$ " << fixed << setprecision(2) << (double)c[a-1]*b << endl;
  
  return 0;
}