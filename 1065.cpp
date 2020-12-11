#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, cont = 0;
  for ( int i = 0; i < 6; i++ ) if (cin >> a && a%2 == 0) cont++;

  cout << cont << " valores pares" << endl;
  
  return 0;
}