#include <bits/stdc++.h>

using namespace std;

int main()
{
  string a;
  double b, c;

  cin >> a >> b >> c;

  cout << "TOTAL = R$ " << fixed << setprecision(2) << b+(15.0/100.0)*c << endl; 
  
  return 0;
}