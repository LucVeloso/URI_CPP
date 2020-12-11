#include <bits/stdc++.h>

using namespace std;

int main()
{
  double i;
  int n[12] = {0};

  cin >> i;
  i*=100;

  n[0] = i/10000;
  i -= n[0]*10000;
  n[1] = i/5000;
  i -= n[1]*5000;
  n[2] = i/2000;
  i -= n[2]*2000;
  n[3] = i/1000;
  i -= n[3]*1000;
  n[4] = i/500;
  i -= n[4]*500;
  n[5] = i/200;
  i -= n[5]*200;
  n[6] = i/100;
  i -= n[6]*100;
  n[7] = i/50;
  i -= n[7]*50;
  n[8] = i/25;
  i -= n[8]*25;
  n[9] = i/10;
  i -= n[9]*10;
  n[10] = i/5;
  i -= n[10]*5;
  n[11] = i;

  cout << "NOTAS:" << endl;
  cout << n[0] << " nota(s) de R$ 100.00" << endl;
  cout << n[1] << " nota(s) de R$ 50.00" << endl;
  cout << n[2] << " nota(s) de R$ 20.00" << endl;
  cout << n[3] << " nota(s) de R$ 10.00" << endl;
  cout << n[4] << " nota(s) de R$ 5.00" << endl;
  cout << n[5] << " nota(s) de R$ 2.00" << endl;
  cout << "MOEDAS:" << endl;
  cout << n[6] << " moeda(s) de R$ 1.00" << endl;
  cout << n[7] << " moeda(s) de R$ 0.50" << endl;
  cout << n[8] << " moeda(s) de R$ 0.25" << endl;
  cout << n[9] << " moeda(s) de R$ 0.10" << endl;
  cout << n[10] << " moeda(s) de R$ 0.05" << endl;
  cout << n[11] << " moeda(s) de R$ 0.01" << endl;
  
  return 0;
}