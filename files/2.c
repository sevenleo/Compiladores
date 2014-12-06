#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;


// *uso do pipe 
double x_double;
float x_float;
char x_char;
int x_int;
int main ()
{
 int i;
int j;
int k;
int soma;
int matrix1[12];
int matrix2[40];
int matrix_result[30];
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
i = 0;
	ROT3:
TB0 = i<3;
	TB3 = !TB0;
	if( TB3 ) goto ROT2;
j = 0;
	ROT1:
TB1 = j<4;
	TB2 = !TB1;
	if( TB2 ) goto ROT0;
TI0 = i;
TI0 = TI0 * 4;
TI1 = TI0+j;
TI3 = j*i;
matrix1[TI1] = TI3;
TI4 = j+1;
j = TI4;
	goto ROT1;
	ROT0:
 ;TI5 = i+1;
i = TI5;
	goto ROT3;
	ROT2:
 ;i = 0;
	ROT7:
TB4 = i<4;
	TB7 = !TB4;
	if( TB7 ) goto ROT6;
j = 0;
	ROT5:
TB5 = j<10;
	TB6 = !TB5;
	if( TB6 ) goto ROT4;
TI6 = i;
TI6 = TI6 * 10;
TI7 = TI6+j;
TI9 = i+j;
matrix2[TI7] = TI9;
TI10 = j+1;
j = TI10;
	goto ROT5;
	ROT4:
 ;TI11 = i+1;
i = TI11;
	goto ROT7;
	ROT6:
 ;cout << "Matriz 1: ";
 cout << "\n";
 i = 0;
	ROT11:
TB8 = i<3;
	TB11 = !TB8;
	if( TB11 ) goto ROT10;
j = 0;
	ROT9:
TB9 = j<4;
	TB10 = !TB9;
	if( TB10 ) goto ROT8;
TI12 = i;
TI12 = TI12 * 4;
TI13 = TI12+j;
cout << matrix1[TI13];
 cout << " ";
 TI15 = j+1;
j = TI15;
	goto ROT9;
	ROT8:
 ;cout << "\n";
 TI16 = i+1;
i = TI16;
	goto ROT11;
	ROT10:
 ;cout << "\n";
 cout << "Matriz 2: ";
 cout << "\n";
 i = 0;
	ROT15:
TB12 = i<4;
	TB15 = !TB12;
	if( TB15 ) goto ROT14;
j = 0;
	ROT13:
TB13 = j<10;
	TB14 = !TB13;
	if( TB14 ) goto ROT12;
TI17 = i;
TI17 = TI17 * 10;
TI18 = TI17+j;
cout << matrix2[TI18];
 cout << " ";
 TI20 = j+1;
j = TI20;
	goto ROT13;
	ROT12:
 ;cout << "\n";
 TI21 = i+1;
i = TI21;
	goto ROT15;
	ROT14:
 ;i = 0;
	ROT21:
TB16 = i<3;
	TB21 = !TB16;
	if( TB21 ) goto ROT20;
j = 0;
	ROT19:
TB17 = j<10;
	TB20 = !TB17;
	if( TB20 ) goto ROT18;
soma = 0;
k = 0;
	ROT17:
TB18 = k<4;
	TB19 = !TB18;
	if( TB19 ) goto ROT16;
TI22 = i;
TI22 = TI22 * 4;
TI23 = TI22+k;
TI25 = k;
TI25 = TI25 * 10;
TI26 = TI25+j;
TI29 = matrix1[TI23];
TI30 = matrix2[TI26];
TI28 = TI29*TI30;
TI32 = TI28;
TI31 = soma+TI32;
soma = TI31;
TI33 = i;
TI33 = TI33 * 10;
TI34 = TI33+j;
matrix_result[TI34] = soma;
TI36 = k+1;
k = TI36;
	goto ROT17;
	ROT16:
 ;TI37 = j+1;
j = TI37;
	goto ROT19;
	ROT18:
 ;TI38 = i+1;
i = TI38;
	goto ROT21;
	ROT20:
 ;cout << "\nProduto das Matrizes 1 e 2: ";
 cout << "\n";
 i = 0;
	ROT25:
TB22 = i<3;
	TB25 = !TB22;
	if( TB25 ) goto ROT24;
j = 0;
	ROT23:
TB23 = j<10;
	TB24 = !TB23;
	if( TB24 ) goto ROT22;
TI39 = i;
TI39 = TI39 * 10;
TI40 = TI39+j;
cout << matrix_result[TI40];
 cout << " ";
 TI42 = j+1;
j = TI42;
	goto ROT23;
	ROT22:
 ;cout << "\n";
 TI43 = i+1;
i = TI43;
	goto ROT25;
	ROT24:
 ;cout << "\n";
 
}

