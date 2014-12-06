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
int TI0;
cout << "Entre com dois numeros para calcular o MDC: ";
 cout << "\n";
 cin >> a ;
cin >> b ;
recursive_MDC(a, b, TI0);
mdc = TI0;
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
int TI0;
int TI1;
int TB0;
int TB1;
TB0 = n2==0;
TB1 =  ! TB0 ;
if(TB1)
goto ROT0;
RI = n1;
return;
ROT0: ;
TI0 = n1%n2;
recursive_MDC(n2, TI0, TI1);
RI = TI1;
return;

}

