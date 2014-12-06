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
int TI20;
int TI21;
int TI22;
int TI23;
int TI24;
int TI25;
int TI26;
int TI27;
int TI28;
int TI29;
int TI30;
int TI31;
int TI32;
int TI33;
int TI34;
int TI35;
int TI36;
int TI37;
int TI38;
int TI39;
int TI40;
int TI41;
int TI42;
int TI43;
double TD0;
double TD1;
double TD2;
double TD3;
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
char TC2;
char TC3;
char TC4;
char TC5;
char TC6;
char TC7;
char TC8;
char TC9;
TI0 = 0;
TI1 = 0;
ZETA[TI0] = TI1;
TI2 = 1;
TI3 = 1;
ZETA[TI2] = TI3;
TI4 = 2;
TI5 = 2;
ZETA[TI4] = TI5;
TI6 = 3;
TI7 = 3;
ZETA[TI6] = TI7;
TI8 = 4;
TI9 = 4;
ZETA[TI8] = TI9;
TI10 = 5;
TI11 = 5;
ZETA[TI10] = TI11;
TI12 = 6;
TI13 = 6;
ZETA[TI12] = TI13;
TI14 = 7;
TI15 = 7;
ZETA[TI14] = TI15;
TI16 = 8;
TI17 = 8;
ZETA[TI16] = TI17;
TI18 = 9;
TI19 = 9;
ZETA[TI18] = TI19;
TI20 = 10;
temp = TI20;
cout << "Dado o vetor ZETA[";
 cout << temp;
 cout << "]\n";
 cout << "mostre os pares, separando-os: \n";
   x_int = 0;
ROT1:
  TB2 = x_int < temp;
  TB3 = !TB2;
  if( TB3 ) goto ROT2;
TI23 = ZETA[x_int];
TI24 = 2;
TI22 = TI23%TI24;
TI25 = TI22;
TI26 = 0;
TB0 = TI25==TI26;
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
TI29 = ZETA[x_int];
TI30 = 2;
TI28 = TI29%TI30;
TI31 = TI28;
TI32 = 0;
TB4 = TI31>TI32;
  TB5 = !TB4;
  if( TB5 ) goto ROT3;
TI34 = 1;
TI33 = temp-TI34;
TI35 = TI33;
TB6 = x_int<TI35;
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
TI36 = 1;
b = TI36;
TI37 = 100;
c = TI37;
TI38 = 10;
d = TI38;
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
TD1 = 10.0001;
TD0 = x_int*TD1;
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
TD3 = 10.0001;
TD2 = x_int*TD3;
temp1 = TD2;
cout << temp1;
 cout << "\n";
 ROT11:
  x_int = x_int + 1;
  goto ROT12;
ROT13:
TC0 = 'A';
a = TC0;
TC1 = 'z';
z = TC1;
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
TC2 = 'Z';
TB18 = x_char>TC2;
  TB19 = !TB18;
  if( TB19 ) goto ROT17;
TC3 = 'a';
TB20 = x_char<TC3;
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
TC4 = 'Z';
TB24 = x_char<=TC4;
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
TC5 = 'a';
TC6 = 'Z';
TI39 = TC5-TC6;
TI40 = 'Z';
TI41 = TI39;
TC7 = TI40+TI41;
TI42 = TC7;
TI43 = 1;
TC8 = TI42-TI43;
TC9 = TC8;
TB28 = x_char>TC9;
  TB29 = !TB28;
  if( TB29 ) goto ROT23;
cout << x_char;
 ROT23:
  x_char = x_char + 1;
  goto ROT24;
ROT25:
cout << "\n";
 
}

