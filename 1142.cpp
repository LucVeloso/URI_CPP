#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1142

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 1; i <= n*4; i+=4) cout << i << " " << i+1 << " " << i+2 << " PUM" << endl;
  
  return 0;
}