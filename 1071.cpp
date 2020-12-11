#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c = 0;

  cin >> b >> a;

  for ( int i = a+1; i < b; i++ ) if ( i%2 ) c += i;
  
  cout << c << endl;

  return 0;
}