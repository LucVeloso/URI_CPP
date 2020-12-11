#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1074

using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n--)
  {
    int m; cin >> m;
    string r;

    if (m == 0) r = "NULL";
    else
    {
      r += m % 2 ? "ODD " : "EVEN ";
      r += m > 0 ? "POSITIVE" : "NEGATIVE";
    }

    cout << r << endl;
  }
  
  return 0;
}