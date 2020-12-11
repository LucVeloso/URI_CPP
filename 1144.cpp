#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1144

using namespace std;

int main()
{
  long long int n;

  cin >> n;

  cout << setprecision(10);

  for (long long int i = 1; i <= n; i++)
  {
    cout << pow(i,1) << " " << pow(i,2) << " " << pow(i,3) << endl;
    cout << pow(i,1) << " " << pow(i,2)+1 << " " << pow(i,3)+1 << endl;
  } 
  
  return 0;
}