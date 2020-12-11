#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1079

using namespace std;

int main()
{
  int n; cin >> n;
  cout << fixed << setprecision(1);

  while (n--)
  {
    int p[3] = {2,3,5};
    double sum = 0, m;  

    for (int i = 0; i < 3; i++)
    {
      cin >> m;
      sum += (double) m*p[i]; 
    } 

    cout << sum/10 << endl;
  }
  
  return 0;
}