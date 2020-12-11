#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1113

using namespace std;

int main()
{
  int m, n;

  while (cin >> m >> n && m != n)
  {
    m < n ? cout << "Crescente" << endl : cout << "Decrescente" << endl;
  }
  
  return 0;
}