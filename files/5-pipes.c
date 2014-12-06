#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int ii;
float ff;
double dd;
char cc;
char ss[256];
int bb;
int main ()
{

 // *uso do pipe 
double x_double;
float x_float;
char x_char;
int x_int;
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
int Temp_I35;
int Temp_I36;
int Temp_I37;
int Temp_I38;
int Temp_I39;
int Temp_I40;
int Temp_I41;
int Temp_I42;
double Temp_D0;
double Temp_D1;
double Temp_D2;
double Temp_D3;
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
int Temp_B10;
int Temp_B11;
int Temp_B12;
int Temp_B13;
int Temp_B14;
int Temp_B15;
int Temp_B16;
int Temp_B17;
int Temp_B18;
int Temp_B19;
int Temp_B20;
int Temp_B21;
int Temp_B22;
int Temp_B23;
int Temp_B24;
int Temp_B25;
int Temp_B26;
int Temp_B27;
int Temp_B28;
int Temp_B29;
int Temp_B30;
int Temp_B31;
char Temp_C0;
char Temp_C1;
char Temp_C2;
char Temp_C3;
char Temp_C4;
char Temp_C5;
char Temp_C6;
char Temp_C7;
char Temp_C8;
char Temp_C9;
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
Temp_I35 = 1;
b = Temp_I35;
Temp_I36 = 100;
c = Temp_I36;
Temp_I37 = 10;
d = Temp_I37;
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
  Temp_B11 = x_int <= c;
  Temp_B12 = !Temp_B11;
  if( Temp_B12 ) goto ROT10;
  Temp_B10 = ! (x_int <= d);
  if( Temp_B10 ) goto ROT8;
Temp_D1 = 10.0001;
Temp_D0 = x_int*Temp_D1;
temp1 = Temp_D0;
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
  Temp_B14 = x_int <= c;
  Temp_B15 = !Temp_B14;
  if( Temp_B15 ) goto ROT13;
  Temp_B13 = ! (x_int > (c-d));
  if( Temp_B13 ) goto ROT11;
Temp_D3 = 10.0001;
Temp_D2 = x_int*Temp_D3;
temp1 = Temp_D2;
  cout << temp1;
   cout << "\n";
 ROT11:
  x_int = x_int + 1;
  goto ROT12;
ROT13:
Temp_C0 = 'A';
a = Temp_C0;
Temp_C1 = 'z';
z = Temp_C1;
  cout << "\nQuais caracteres temos entre A-z ? \n";
   x_char = a;
ROT15:
  Temp_B16 = x_char <= z;
  Temp_B17 = !Temp_B16;
  if( Temp_B17 ) goto ROT16;
  cout << x_char;
 ROT14:
  x_char = x_char + 1;
  goto ROT15;
ROT16:
  cout << "\n\nQuantos nao sao letras ? \n";
   x_char = a;
ROT18:
  Temp_B22 = x_char <= z;
  Temp_B23 = !Temp_B22;
  if( Temp_B23 ) goto ROT19;
Temp_C2 = 'Z';
Temp_B18 = x_char>Temp_C2;
  Temp_B19 = !Temp_B18;
  if( Temp_B19 ) goto ROT17;
Temp_C3 = 'a';
Temp_B20 = x_char<Temp_C3;
  Temp_B21 = !Temp_B20;
  if( Temp_B21 ) goto ROT17;
  cout << x_char;
 ROT17:
  x_char = x_char + 1;
  goto ROT18;
ROT19:
  cout << "\n\nAgora mostre somente as letras maiusculas:\n";
   x_char = a;
ROT21:
  Temp_B26 = x_char <= z;
  Temp_B27 = !Temp_B26;
  if( Temp_B27 ) goto ROT22;
Temp_C4 = 'Z';
Temp_B24 = x_char<=Temp_C4;
  Temp_B25 = !Temp_B24;
  if( Temp_B25 ) goto ROT20;
  cout << x_char;
 ROT20:
  x_char = x_char + 1;
  goto ROT21;
ROT22:
  cout << "\n\nAgora mostre somente as letras minusculas:\n";
   x_char = a;
ROT24:
  Temp_B30 = x_char <= z;
  Temp_B31 = !Temp_B30;
  if( Temp_B31 ) goto ROT25;
Temp_C5 = 'a';
Temp_C6 = 'Z';
Temp_I38 = Temp_C5-Temp_C6;
Temp_I39 = 'Z';
Temp_I40 = Temp_I38;
Temp_C7 = Temp_I39+Temp_I40;
Temp_I41 = Temp_C7;
Temp_I42 = 1;
Temp_C8 = Temp_I41-Temp_I42;
Temp_C9 = Temp_C8;
Temp_B28 = x_char>Temp_C9;
  Temp_B29 = !Temp_B28;
  if( Temp_B29 ) goto ROT23;
  cout << x_char;
 ROT23:
  x_char = x_char + 1;
  goto ROT24;
ROT25:
  cout << "\n";
 

 return 0; 
}

