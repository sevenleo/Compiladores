#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

int ii;
float ff;
double dd;
char cc;
char ss[256];
int bb;
// *uso do pipe 
double x_double;
float x_float;
char x_char;
int x_int;
int main ()
{
 int b;
int c;
int d;
int temp;
double temp1;
int ZETA[6];
char a;
char z;
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
double TD0;
double TD1;
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
int TB14;
int TB15;
int TB16;
int TB17;
int TB18;
int TB19;
int TB20;
int TB21;
int TB22;
int TB23;
int TB24;
int TB25;
int TB26;
int TB27;
int TB28;
int TB29;
int TB30;
int TB31;
char TC0;
char TC1;
ZETA[0] = 0;
ZETA[1] = 1;
ZETA[2] = 2;
ZETA[3] = 3;
ZETA[4] = 4;
ZETA[5] = 5;
ZETA[6] = 6;
ZETA[7] = 7;
ZETA[8] = 8;
ZETA[9] = 9;
temp = 10;
cout << "Dado o vetor ZETA[";
 cout << temp;
 cout << "]\n";
 cout << "mostre os pares, separando-os: \n";
   x_int = 0;
ROT1:
  TB2 = x_int < temp;
  TB3 = !TB2;
  if( TB3 ) goto ROT2;
TI12 = ZETA[x_int];
TI11 = TI12%2;
TI13 = TI11;
TB0 = TI13==0;
  TB1 = !TB0;
  if( TB1 ) goto ROT0;
cout << " - ";
 ROT0:
  x_int = x_int + 1;
  goto ROT1;
ROT2:
cout << "\nAgora os ímpares, porém coloque um ponto e virgula quando chegar no final: \n";
   x_int = 0;
ROT6:
  TB8 = x_int < temp;
  TB9 = !TB8;
  if( TB9 ) goto ROT7;
TI16 = ZETA[x_int];
TI15 = TI16%2;
TI17 = TI15;
TB4 = TI17>0;
  TB5 = !TB4;
  if( TB5 ) goto ROT3;
TI18 = temp-1;
TB6 = x_int<TI18;
TB7 =  ! TB6 ;
if(TB7)
goto ROT4;
cout << ZETA[x_int];
 cout << ", ";
 goto ROT5;
ROT4: ;
cout << ZETA[x_int];
 cout << ";";
 ROT5: ;
ROT3:
  x_int = x_int + 1;
  goto ROT6;
ROT7:
b = 1;
c = 100;
d = 10;
cout << "\n\nDentro do intervalo de ";
 cout << b;
 cout << " ate ";
 cout << c;
 cout << "\n";
 cout << "mostre os primeiros";
 cout << d;
 cout << ", porém multiplique-os por 10.0001 antes de imprimir\n";
   x_int = b;
ROT9:
  TB11 = x_int <= c;
  TB12 = !TB11;
  if( TB12 ) goto ROT10;
  TB10 = ! (x_int <= d);
  if( TB10 ) goto ROT8;
TD0 = x_int*10.0001;
temp1 = TD0;
cout << temp1;
 cout << "\n";
 ROT8:
  x_int = x_int + 1;
  goto ROT9;
ROT10:
cout << "mostre os ultimos ";
 cout << d;
 cout << ", porém multiplique-os por 10.0001 antes de imprimir\n";
   x_int = b;
ROT12:
  TB14 = x_int <= c;
  TB15 = !TB14;
  if( TB15 ) goto ROT13;
  TB13 = ! (x_int > (c-d));
  if( TB13 ) goto ROT11;
TD1 = x_int*10.0001;
temp1 = TD1;
cout << temp1;
 cout << "\n";
 ROT11:
  x_int = x_int + 1;
  goto ROT12;
ROT13:
a = 'A';
z = 'z';
cout << "\nQuais caracteres temos entre A-z ? \n";
   x_char = a;
ROT15:
  TB16 = x_char <= z;
  TB17 = !TB16;
  if( TB17 ) goto ROT16;
cout << x_char;
 ROT14:
  x_char = x_char + 1;
  goto ROT15;
ROT16:
cout << "\n\nQuantos nao sao letras ? \n";
   x_char = a;
ROT18:
  TB22 = x_char <= z;
  TB23 = !TB22;
  if( TB23 ) goto ROT19;
TB18 = x_char>'Z';
  TB19 = !TB18;
  if( TB19 ) goto ROT17;
TB20 = x_char<'a';
  TB21 = !TB20;
  if( TB21 ) goto ROT17;
cout << x_char;
 ROT17:
  x_char = x_char + 1;
  goto ROT18;
ROT19:
cout << "\n\nAgora mostre somente as letras maiusculas:\n";
   x_char = a;
ROT21:
  TB26 = x_char <= z;
  TB27 = !TB26;
  if( TB27 ) goto ROT22;
TB24 = x_char<='Z';
  TB25 = !TB24;
  if( TB25 ) goto ROT20;
cout << x_char;
 ROT20:
  x_char = x_char + 1;
  goto ROT21;
ROT22:
cout << "\n\nAgora mostre somente as letras minusculas:\n";
   x_char = a;
ROT24:
  TB30 = x_char <= z;
  TB31 = !TB30;
  if( TB31 ) goto ROT25;
TI19 = 'a'-'Z';
TC0 = 'Z'+TI19;
TC1 = TC0-1;
TB28 = x_char>TC1;
  TB29 = !TB28;
  if( TB29 ) goto ROT23;
cout << x_char;
 ROT23:
  x_char = x_char + 1;
  goto ROT24;
ROT25:
cout << "\n";
 
}

