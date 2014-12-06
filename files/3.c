#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

void discriminante(double a,double b,double c,int &RI);

// *uso do pipe 
double x_double;
float x_float;
char x_char;
int x_int;
int main ()
{
 int a;
int b;
int c;
int delta;
double raiz1;
double raiz2;
int sqrt;
int i;
int imaginaria;
int user_option;
char resposta[256];
char NAO[256];
char option[256];
int TI0;
int TI1;
int TI2;
int TI3;
int TI4;
int TI5;
int TI6;
double TD0;
double TD1;
double TD2;
double TD3;
double TD4;
double TD5;
double TD6;
double TD7;
double TD8;
double TD9;
double TD10;
double TD11;
int TB0;
int TB1;
int TB2;
int TB3;
int TB4;
int TB5;
int TB6;
int TB7;
int TB8;
char TS0[256];
TS0[255] = '\0';
imaginaria = 0;
user_option = 1;
	ROT7:
	TB8 = !user_option;
	if( TB8 ) goto ROT6;
cout << "Entre com o coeficiente a da equacao do 2 grau: ";
 cout << "\n";
 cin >> a ;
cout << "Entre com o coeficiente b da equacao do 2 grau: ";
 cout << "\n";
 cin >> b ;
cout << "Entre com o coeficiente c da equacao do 2 grau: ";
 cout << "\n";
 cin >> c ;
discriminante(a, b, c, TI0);
delta = TI0;
cout << "\nDelta = ";
 cout << delta;
 cout << "\n";
 cout << "\n";
 TB0 = delta<0;
TB1 =  ! TB0 ;
if(TB1)
goto ROT0;
cout << "Delta negativo!! Raizes serao complexas!!";
 cout << "\n";
 TI1 = delta*-1;
delta = TI1;
imaginaria = 1;
ROT0: ;
sqrt = delta;
i = 0;
	ROT2:
TI2 = delta/2;
TB2 = i<TI2;
	TB3 = !TB2;
	if( TB3 ) goto ROT1;
TI2 = delta/2;
TI3 = delta/sqrt;
TI4 = sqrt+TI3;
TI5 = TI4/2;
sqrt = TI5;
TI6 = i+1;
i = TI6;
	goto ROT2;
	ROT1:
 ;cout << "\nRaiz de delta (Valor inteiro da raiz de delta) = ";
 cout << sqrt;
 cout << "\n";
 TD0 = b*-1;
TD1 = TD0+sqrt;
TD2 = 2*a;
TD3 = TD1/TD2;
raiz1 = TD3;
TD4 = b*-1;
TD5 = TD4-sqrt;
TD6 = 2*a;
TD7 = TD5/TD6;
raiz2 = TD7;
TB4 =  ! imaginaria ;
if(TB4)
goto ROT3;
cout << "\nRaiz 1: (";
 TD8 = b*-1;
cout << TD8;
 cout << " + ";
 cout << sqrt;
 cout << "i ) / ";
 TD9 = 2*a;
cout << TD9;
 cout << "\n";
 cout << "Raiz 2: (";
 TD10 = b*-1;
cout << TD10;
 cout << " - ";
 cout << sqrt;
 cout << "i ) / ";
 TD11 = 2*a;
cout << TD11;
 cout << "\n";
 goto ROT4;
ROT3: ;
cout << "\nRaiz 1: ";
 cout << raiz1;
 cout << "\n";
 cout << "Raiz 2: ";
 cout << raiz2;
 cout << "\n";
 ROT4: ;
imaginaria = 0;
cout << "Deseja entrar com outra equacao? (Digite 'sim' ou 'nao')";
 cout << "\n";
 cin >> option ;
strncpy(TS0,"nao", 256);
strncpy(NAO, TS0, 256);
if( string( option ) == string( NAO ) == 1 ) TB6 = 1;
else TB6 = 0;
TB7 =  ! TB6 ;
if(TB7)
goto ROT5;
user_option = 0;
ROT5: ;
	goto ROT7;
	ROT6:
 ;
}
void discriminante(double a,double b,double c,int &RI)
{
 int x_int;
float x_float;
double x_double;
char x_char;
double TD0;
double TD1;
double TD2;
double TD3;
TD0 = b*b;
TD1 = 4*a;
TD2 = TD1*c;
TD3 = TD0-TD2;
RI = TD3;
return;

}

