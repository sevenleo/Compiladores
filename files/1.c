#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

void recursive_MDC(int n1,int n2,int &RI);

// *uso do pipe 
double x_double;
float x_float;
char x_char;
int x_int;
int main ()
{
 int a;
int b;
int mdc;
int Temp_I0;
int Temp_I1;
cout << "Entre com dois numeros para calcular o MDC: ";
 cout << "\n";
 cin >> a ;
cin >> b ;
recursive_MDC(a, b, Temp_I0);
Temp_I1 = Temp_I0;
mdc = Temp_I1;
cout << "O MDC entre ";
 cout << a;
 cout << " e ";
 cout << b;
 cout << " e igual a: ";
 cout << mdc;
 cout << "\n";
 cout << "\n";
 
}
void recursive_MDC(int n1,int n2,int &RI)
{
 int x_int;
float x_float;
double x_double;
char x_char;
int Temp_I0;
int Temp_I1;
int Temp_I2;
int Temp_I3;
int Temp_I4;
int Temp_I5;
int Temp_B0;
int Temp_B1;
Temp_I0 = n2;
Temp_I1 = 0;
Temp_B0 = Temp_I0==Temp_I1;
Temp_B1 =  ! Temp_B0 ;
if(Temp_B1)
goto ROT0;
RI = n1;
return;
ROT0: ;
Temp_I3 = n1;
Temp_I4 = n2;
Temp_I2 = Temp_I3%Temp_I4;
recursive_MDC(n2, Temp_I2, Temp_I5);
RI = Temp_I5;
return;

}

