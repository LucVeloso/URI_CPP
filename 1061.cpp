#include <bits/stdc++.h>

using namespace std;

int main()
{
  string lixo;
  int di, hi, mi, si;
  int df, hf, mf, sf;

  cin >> lixo >> di;
  cin >> hi >> lixo >> mi >> lixo >> si;
  cin >> lixo >> df;
  cin >> hf >> lixo >> mf >> lixo >> sf;

  si += mi*60 + hi*3600 + di*86400;
  sf += mf*60 + hf*3600 + df*86400;

  sf -= si;
  df = sf/86400; sf %= 86400;
  hf = sf/3600; sf %= 3600;
  mf = sf/60; sf %= 60;

  cout << df << " dia(s)" << endl;
  cout << hf << " hora(s)" << endl;
  cout << mf << " minuto(s)" << endl;
  cout << sf << " segundo(s)" << endl;
  
  return 0;
}