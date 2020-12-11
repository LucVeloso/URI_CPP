#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1080

using namespace std;

int main()
{
  int n, maior = 0, p;

  for (int i = 1; i <= 100; i++)
  {
    cin >> n;

    if ( n > maior )
    {
      maior = n;
      p = i;
    }
  }
  
  cout << maior << endl << p << endl;
  
  return 0;
}