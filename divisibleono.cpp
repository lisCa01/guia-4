#include <iostream>

using namespace std;

int main(void)
{
int num1,num2;
cout << "ingrese numeros " << endl;
cin>> num1;
cin>>num2;
if(num1 % num2 == 0) 
{cout <<"es divisible" << endl;}
else
{cout<<"no es divisible" << endl;}
return 0;
}
