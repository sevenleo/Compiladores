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
int Temp_I0;
int Temp_I1;
int Temp_I2;
int Temp_I3;
int Temp_I4;
int Temp_I5;
int Temp_I6;
int Temp_I7;
int Temp_I8;
int Temp_I9;
int Temp_I10;
int Temp_I11;
int Temp_I12;
int Temp_I13;
int Temp_I14;
int Temp_I15;
int Temp_I16;
int Temp_I17;
int Temp_I18;
int Temp_I19;
int Temp_I20;
int Temp_I21;
int Temp_I22;
int Temp_I23;
int Temp_I24;
int Temp_I25;
int Temp_I26;
int Temp_I27;
int Temp_I28;
int Temp_I29;
int Temp_I30;
int Temp_I31;
int Temp_I32;
int Temp_I33;
int Temp_I34;
int Temp_B0;
int Temp_B1;
int Temp_B2;
int Temp_B3;
int Temp_B4;
int Temp_B5;
int Temp_B6;
int Temp_B7;
int Temp_B8;
int Temp_B9;
Temp_I0 = 0;
Temp_I1 = 0;
ZETA[Temp_I0] = Temp_I1;
Temp_I2 = 1;
Temp_I3 = 1;
ZETA[Temp_I2] = Temp_I3;
Temp_I4 = 2;
Temp_I5 = 2;
ZETA[Temp_I4] = Temp_I5;
Temp_I6 = 3;
Temp_I7 = 3;
ZETA[Temp_I6] = Temp_I7;
Temp_I8 = 4;
Temp_I9 = 4;
ZETA[Temp_I8] = Temp_I9;
Temp_I10 = 5;
Temp_I11 = 5;
ZETA[Temp_I10] = Temp_I11;
Temp_I12 = 6;
Temp_I13 = 6;
ZETA[Temp_I12] = Temp_I13;
Temp_I14 = 7;
Temp_I15 = 7;
ZETA[Temp_I14] = Temp_I15;
Temp_I16 = 8;
Temp_I17 = 8;
ZETA[Temp_I16] = Temp_I17;
Temp_I18 = 9;
Temp_I19 = 9;
ZETA[Temp_I18] = Temp_I19;
Temp_I20 = 10;
temp = Temp_I20;
cout << "Dado o vetor ZETA[";
 cout << temp;
 cout << "]\n";
 cout << "mostre os pares, separando-os: \n";
   x_int = 0;
ROT1:
  Temp_B2 = x_int < temp;
  Temp_B3 = !Temp_B2;
  if( Temp_B3 ) goto ROT2;
Temp_I23 = ZETA[x_int];
Temp_I24 = 2;
Temp_I22 = Temp_I23%Temp_I24;
Temp_I25 = Temp_I22;
Temp_I26 = 0;
Temp_B0 = Temp_I25==Temp_I26;
  Temp_B1 = !Temp_B0;
  if( Temp_B1 ) goto ROT0;
cout << ZETA[x_int];
 cout << " - ";
 ROT0:
  x_int = x_int + 1;
  goto ROT1;
ROT2:
cout << "\nAgora os ímpares, porém coloque um ponto e virgula quando chegar no final: \n";
   x_int = 0;
ROT6:
  Temp_B8 = x_int < temp;
  Temp_B9 = !Temp_B8;
  if( Temp_B9 ) goto ROT7;
Temp_I29 = ZETA[x_int];
Temp_I30 = 2;
Temp_I28 = Temp_I29%Temp_I30;
Temp_I31 = Temp_I28;
Temp_I32 = 0;
Temp_B4 = Temp_I31>Temp_I32;
  Temp_B5 = !Temp_B4;
  if( Temp_B5 ) goto ROT3;
Temp_I34 = 1;
Temp_I33 = temp-Temp_I34;
Temp_B6 = x_int<Temp_I33;
Temp_B7 =  ! Temp_B6 ;
if(Temp_B7)
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

