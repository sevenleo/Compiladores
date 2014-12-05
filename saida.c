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

 int a;
int b;
int c;
int tmp;
int x_int;
float x_float;
double x_double;
char x_char;
int Temp_I0;
int Temp_I1;
int Temp_I2;
int Temp_I3;
int Temp_I4;
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
a = 1;
b = 20;
c = 5;
Temp_I0 = b%c;
a = Temp_I0;
  cout << "Dados o intervalo de ";
   cout << a;
   cout << " a ";
   cout << b;
   cout << ":";
   cout << "\n";
   cout << "Os ";
   cout << c;
   cout << " PRIMEIROS";
   cout << "\n";
   x_int = a;
ROT1:
  Temp_B1 = x_int <= b;
  Temp_B2 = !Temp_B1;
  if( Temp_B2 ) goto ROT2;
  Temp_B0 = ! (x_int <= c);
  if( Temp_B0 ) goto ROT0;
  cout << x_int;
   cout << " ";
 ROT0:
  x_int = x_int + 1;
  goto ROT1;
ROT2:
  cout << "\nOs ";
   cout << c;
   cout << " ULTIMOS";
   cout << "\n";
   x_int = a;
ROT4:
  Temp_B4 = x_int <= b;
  Temp_B5 = !Temp_B4;
  if( Temp_B5 ) goto ROT5;
  Temp_B3 = ! (x_int > (b-c));
  if( Temp_B3 ) goto ROT3;
  cout << x_int;
   cout << " ";
 ROT3:
  x_int = x_int + 1;
  goto ROT4;
ROT5:
  cout << "\n";
   cout << "Os numeros impares * 10 \n";
   x_int = a;
ROT7:
  Temp_B8 = x_int <= b;
  Temp_B9 = !Temp_B8;
  if( Temp_B9 ) goto ROT8;
Temp_I1 = x_int;
Temp_I1 = Temp_I1%2;
Temp_I2 = Temp_I1;
Temp_B6 = Temp_I2>0;
  Temp_B7 = !Temp_B6;
  if( Temp_B7 ) goto ROT6;
Temp_I3 = x_int;
Temp_I3 = Temp_I3*10;
Temp_I4 = Temp_I3;
tmp = Temp_I4;
  cout << tmp;
   cout << " ";
 ROT6:
  x_int = x_int + 1;
  goto ROT7;
ROT8:
  cout << "\n";
   cout << "Hoje eh dia ";
   cout << 5;
   cout << "\n";
 

 return 0; 
}

