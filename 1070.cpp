#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;

  cin >> a;
  a = a%2 == 0 ? a+1 : a;

  for ( int i = a; i <= a+10; i+=2 ) cout << i << endl;
  
  return 0;
}