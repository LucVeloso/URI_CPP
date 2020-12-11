#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c;
  
  cin >> a >> b >> c;

  if (a <= b && a <= c)
  {
    cout << a << endl;

    if (b <= c)
    {
      cout << b << endl;
      cout << c << endl << endl;
    } 
    else 
    {
      cout << c << endl;
      cout << b << endl << endl;
    }
  } 
  else if (b <= a && b <= c) 
  {
    cout << b << endl;

    if (a <= c)
    {
      cout << a << endl;
      cout << c << endl << endl;
    } 
    else 
    {
      cout << c << endl;
      cout << a << endl << endl;
    }
  } 
  else
  {
    cout << c << endl;

    if (a <= b)
    {
      cout << a << endl;
      cout << b << endl << endl;
    } 
    else 
    {
      cout << b << endl;
      cout << a << endl << endl;
    }
  } 

  cout << a << endl << b << endl << c << endl;

  return 0;
}