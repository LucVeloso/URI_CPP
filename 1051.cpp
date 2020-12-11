#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a;

  cin >> a;
  cout << fixed << setprecision(2);

  if ( a <= 2000.00 )
  {
    cout << "Isento" << endl;
    return 0;
  }  
  else  a -= 2000;

  if ( a <= 1000.00 )
  {
    cout << "R$ " << a*8/100 << endl;
    return 0;
  } 
  else  a -= 1000;

  if ( a <= 1500.00 )
  {
    cout << "R$ " << 80+(a*18/100) << endl;
    return 0;
  }  
  else a -= 1500;

  cout << "R$ " << 80+270+(a*28/100) << endl;
  
  return 0;
}