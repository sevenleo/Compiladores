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
cout << "\n";
 
}

