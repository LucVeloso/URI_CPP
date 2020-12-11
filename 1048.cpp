#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, b;

  cin >> a;
  cout << fixed << setprecision(2);

  if ( a <= 400.00 )
  {
    b = a*15/100;

    cout << "Novo salario: " << a+b << endl;
    cout << "Reajuste ganho: " << b << endl;
    cout << "Em percentual: 15 %" << endl;
  }
  else if ( a <= 800.00 )
  {
    b = a*12/100;

    cout << "Novo salario: " << a+b << endl;
    cout << "Reajuste ganho: " << b << endl;
    cout << "Em percentual: 12 %" << endl;
  }
  else if ( a <= 1200.00 )
  {
    b = a*10/100;

    cout << "Novo salario: " << a+b << endl;
    cout << "Reajuste ganho: " << b << endl;
    cout << "Em percentual: 10 %" << endl;
  }
  else if ( a <= 2000.00 )
  {
    b = a*7/100;

    cout << "Novo salario: " << a+b << endl;
    cout << "Reajuste ganho: " << b << endl;
    cout << "Em percentual: 7 %" << endl;
  }
  else
  {
    b = a*4/100;

    cout << "Novo salario: " << a+b << endl;
    cout << "Reajuste ganho: " << b << endl;
    cout << "Em percentual: 4 %" << endl;
  }
  
  return 0;
}