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
int TI7;
int TI8;
int TI9;
int TI10;
int TI11;
int TI12;
int TI13;
int TI14;
int TI15;
int TI16;
int TI17;
int TI18;
int TI19;
int TI20;
int TI21;
int TI22;
int TI23;
int TI24;
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
double TD12;
double TD13;
double TD14;
double TD15;
double TD16;
double TD17;
double TD18;
double TD19;
double TD20;
double TD21;
double TD22;
double TD23;
double TD24;
double TD25;
double TD26;
double TD27;
int TB0;
int TB1;
int TB2;
int TB3;
int TB4;
int TB5;
int TB6;
int TB7;
int TB8;
int TB9;
int TB10;
int TB11;
int TB12;
int TB13;
char TS0[256];
char TS1[256];
TS0[255] = '\0';
TS1[255] = '\0';
TB0 = 0;
imaginaria = TB0;
TB1 = 1;
user_option = TB1;
	ROT7:
	TB13 = !user_option;
	if( TB13 ) goto ROT6;
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
TI1 = TI0;
delta = TI1;
cout << "\nDelta = ";
 cout << delta;
 cout << "\n";
 cout << "\n";
 TI2 = 0;
TB2 = delta<TI2;
TB4 =  ! TB2 ;
if(TB4)
goto ROT0;
cout << "Delta negativo!! Raizes serao complexas!!";
 cout << "\n";
 TI4 = -1;
TI3 = delta*TI4;
delta = TI3;
TB3 = 1;
imaginaria = TB3;
ROT0: ;
sqrt = delta;
TI5 = 0;
i = TI5;
	ROT2:
TI7 = 2;
TI6 = delta/TI7;
TI8 = TI6;
TB5 = i<TI8;
	TB6 = !TB5;
	if( TB6 ) goto ROT1;
TI7 = 2;
TI6 = delta/TI7;
TI9 = delta/sqrt;
TI10 = sqrt+TI9;
TI12 = TI10;
TI13 = 2;
TI11 = TI12/TI13;
TI14 = TI11;
sqrt = TI14;
TI16 = 1;
TI15 = i+TI16;
i = TI15;
	goto ROT2;
	ROT1:
 ;cout << "\nRaiz de delta (Valor inteiro da raiz de delta) = ";
 cout << sqrt;
 cout << "\n";
 TI17 = b;
TI18 = -1;
TD0 = TI17*TI18;
TD2 = TD0;
TD1 = TD2+sqrt;
TD4 = 2;
TD5 = a;
TD3 = TD4*TD5;
TD7 = TD1;
TD8 = TD3;
TD6 = TD7/TD8;
TD9 = TD6;
raiz1 = TD9;
TI19 = b;
TI20 = -1;
TD10 = TI19*TI20;
TD12 = TD10;
TD11 = TD12-sqrt;
TD14 = 2;
TD15 = a;
TD13 = TD14*TD15;
TD17 = TD11;
TD18 = TD13;
TD16 = TD17/TD18;
TD19 = TD16;
raiz2 = TD19;
TB7 =  ! imaginaria ;
if(TB7)
goto ROT3;
cout << "\nRaiz 1: (";
 TI21 = b;
TI22 = -1;
TD20 = TI21*TI22;
cout << TD20;
 cout << " + ";
 cout << sqrt;
 cout << "i ) / ";
 TD22 = 2;
TD23 = a;
TD21 = TD22*TD23;
cout << TD21;
 cout << "\n";
 cout << "Raiz 2: (";
 TI23 = b;
TI24 = -1;
TD24 = TI23*TI24;
cout << TD24;
 cout << " - ";
 cout << sqrt;
 cout << "i ) / ";
 TD26 = 2;
TD27 = a;
TD25 = TD26*TD27;
cout << TD25;
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
TB8 = 0;
imaginaria = TB8;
cout << "Deseja entrar com outra equacao? (Digite 'sim' ou 'nao')";
 cout << "\n";
 cin >> option ;
strncpy(TS1, "nao", 256);
strncpy(NAO,TS1, 256);
if( string( option ) == string( NAO ) == 1 ) TB10 = 1;
else TB10 = 0;
TB12 =  ! TB10 ;
if(TB12)
goto ROT5;
TB11 = 0;
user_option = TB11;
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
double TD4;
double TD5;
double TD6;
double TD7;
double TD8;
double TD9;
double TD10;
double TD11;
TD1 = b;
TD2 = b;
TD0 = TD1*TD2;
TD4 = 4;
TD5 = a;
TD3 = TD4*TD5;
TD7 = TD3;
TD8 = c;
TD6 = TD7*TD8;
TD10 = TD0;
TD11 = TD6;
TD9 = TD10-TD11;
RI = TD9;
return;

}

