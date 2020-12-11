#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1075

using namespace std;

int main()
{
  int n; cin >> n;

  for (int i = 1; i <= 10000; i++) if ( i % n == 2) cout << i << endl;
  
  return 0;
}