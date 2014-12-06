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
cout << ZETA[x_int];
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
cout << "\n";
 
}

