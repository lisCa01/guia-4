#include <iostream>

using namespace std;

int main()
{
string palabra;
cout<<"ingrese una palabra";
cin>> palabra;
if(palabra.front() == palabra.back())
{cout<<"las letras del inicio y del final son iguales"<< endl;}
else
{ cout << " la letra del inicio es diferente a la del final"<< endl;}

return 0;
}