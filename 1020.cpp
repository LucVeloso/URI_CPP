#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, m, d;

  cin >> d;

  a = d/365;
  d -= a*365;
  m = d/30;
  d -= m*30;
 
  cout << a << " ano(s)" << endl;
  cout << m << " mes(es)" << endl;
  cout << d << " dia(s)"<< endl;
  
  return 0;
}