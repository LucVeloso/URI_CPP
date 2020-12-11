#include <bits/stdc++.h>

//Problema: https://www.urionlinejudge.com.br/judge/pt/problems/view/1098

using namespace std;

int main()
{
  for (double i = 0; i <= 2; i += 0.2)
  {
    cout << "I=" << i << " J=" << i+1 << endl;
    cout << "I=" << i << " J=" << i+2 << endl;
    cout << "I=" << i << " J=" << i+3 << endl;
  } 
  
  return 0;
}