#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1143

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 1; i <= n; i++) cout << pow(i,1) << " " << pow(i,2) << " " << pow(i,3) << endl;
    
  return 0;
}