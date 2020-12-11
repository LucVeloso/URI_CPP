#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i, j, n[7] = {0};

  cin >> i;
  j = i;

  n[0] = i/100;
  i %= 100;
  n[1] = i/50;
  i %= 50;
  n[2] = i/20;
  i %= 20;
  n[3] = i/10;
  i %= 10;
  n[4] = i/5;
  i %= 5;
  n[5] = i/2;
  i %= 2;
  n[6] = i;

  cout << j << endl;
  cout << n[0] << " nota(s) de R$ 100,00" << endl;
  cout << n[1] << " nota(s) de R$ 50,00" << endl;
  cout << n[2] << " nota(s) de R$ 20,00" << endl;
  cout << n[3] << " nota(s) de R$ 10,00" << endl;
  cout << n[4] << " nota(s) de R$ 5,00" << endl;
  cout << n[5] << " nota(s) de R$ 2,00" << endl;
  cout << n[6] << " nota(s) de R$ 1,00" << endl;
  
  return 0;
}