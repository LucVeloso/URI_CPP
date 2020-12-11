#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, b, c, d, m;

  cin >> a >> b >> c >> d;

  m = (2*a+3*b+4*c+d)/10;

  cout << fixed << setprecision(1);
  cout << "Media: " << m << endl;

  if (m >= 7) cout << "Aluno aprovado." << endl;
  else if (m >= 5)
  {
    double e;
    cout << "Aluno em exame." << endl;

    cin >> e;
    cout << "Nota do exame: " << e << endl;
    e = (e+m)/2;

    if (e >= 5)
    {
      cout << "Aluno aprovado." << endl;
      cout << "Media final: " << e << endl;
    }
    else
    {
      cout << "Aluno reprovado." << endl;
      cout << "Media final: " << e << endl;
    }
  }
  else cout << "Aluno reprovado." << endl;
  
  return 0;
}