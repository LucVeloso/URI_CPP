#include <bits/stdc++.h>

using namespace std;

int main()
{
  int c, n, i = 0, o = 0;

  cin >> c;

  while ( c-- )
  {
    cin >> n;
    (n >= 10 && n <= 20) ? i++ : o++;
  }

  cout << i << " in" << endl;
  cout << o << " out" << endl;
  
  return 0;
}