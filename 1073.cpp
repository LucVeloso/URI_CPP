#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;

  cin >> a;
  cout << setprecision(11);

  for ( int i = 2; i <= a; i+=2 ) cout << i << "^2 = " << i*i << endl;
  
  return 0;
}