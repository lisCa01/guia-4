#include <iostream>

using namespace std;

int main() {
  string  palabra;
  cout<<"ingrese la palabra:"<< endl;
  cin>>palabra;
  if ((palabra.size()%2)==0)
  {cout <<"la palabra es par"<<endl;}
  else
{cout<<"la palabra es impar"<<endl;}

return 0;
}