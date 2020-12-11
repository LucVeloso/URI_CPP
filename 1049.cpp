#include <bits/stdc++.h>

using namespace std;

int main()
{
  string e;

  cin >> e;

  if (e == "vertebrado")
  {
    cin >> e;

    if ( e == "ave" )
    {
      cin >> e;

      if ( e == "carnivoro" ) cout << "aguia" << endl;
      else cout << "pomba" << endl;
    }
    else 
    {
      cin >> e;

      if ( e == "onivoro" ) cout << "homem" << endl;
      else cout << "vaca" << endl;
    }
  }
  else
  {
    cin >> e;

    if ( e == "inseto" )
    {
      cin >> e;

      if ( e == "hematofago" ) cout << "pulga" << endl;
      else cout << "lagarta" << endl;
    }
    else 
    {
      cin >> e;

      if ( e == "hematofago" ) cout << "sanguessuga" << endl;
      else cout << "minhoca" << endl;
    }
  }
  
  return 0;
}