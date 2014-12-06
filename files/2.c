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
int TI44;
int TI45;
int TI46;
int TI47;
int TI48;
int TI49;
int TI50;
int TI51;
int TI52;
int TI53;
int TI54;
int TI55;
int TI56;
int TI57;
int TI58;
int TI59;
int TI60;
int TI61;
int TI62;
int TI63;
int TI64;
int TI65;
int TI66;
int TI67;
int TI68;
int TI69;
int TI70;
int TI71;
int TI72;
int TI73;
int TI74;
int TI75;
int TI76;
int TI77;
int TI78;
int TI79;
int TI80;
int TI81;
int TI82;
int TI83;
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
TI0 = 0;
i = TI0;
	ROT3:
TI1 = 3;
TB0 = i<TI1;
	TB3 = !TB0;
	if( TB3 ) goto ROT2;
TI2 = 0;
j = TI2;
	ROT1:
TI3 = 4;
TB1 = j<TI3;
	TB2 = !TB1;
	if( TB2 ) goto ROT0;
TI4 = i;
TI4 = TI4 * 4;
TI5 = TI4+j;
TI7 = j*i;
matrix1[TI5] = TI7;
TI9 = 1;
TI8 = j+TI9;
j = TI8;
	goto ROT1;
	ROT0:
 ;TI11 = 1;
TI10 = i+TI11;
i = TI10;
	goto ROT3;
	ROT2:
 ;TI12 = 0;
i = TI12;
	ROT7:
TI13 = 4;
TB4 = i<TI13;
	TB7 = !TB4;
	if( TB7 ) goto ROT6;
TI14 = 0;
j = TI14;
	ROT5:
TI15 = 10;
TB5 = j<TI15;
	TB6 = !TB5;
	if( TB6 ) goto ROT4;
TI16 = i;
TI16 = TI16 * 10;
TI17 = TI16+j;
TI19 = i+j;
matrix2[TI17] = TI19;
TI21 = 1;
TI20 = j+TI21;
j = TI20;
	goto ROT5;
	ROT4:
 ;TI23 = 1;
TI22 = i+TI23;
i = TI22;
	goto ROT7;
	ROT6:
 ;cout << "Matriz 1: ";
 cout << "\n";
 TI24 = 0;
i = TI24;
	ROT11:
TI25 = 3;
TB8 = i<TI25;
	TB11 = !TB8;
	if( TB11 ) goto ROT10;
TI26 = 0;
j = TI26;
	ROT9:
TI27 = 4;
TB9 = j<TI27;
	TB10 = !TB9;
	if( TB10 ) goto ROT8;
TI28 = i;
TI28 = TI28 * 4;
TI29 = TI28+j;
cout << matrix1[TI29];
 cout << " ";
 TI32 = 1;
TI31 = j+TI32;
j = TI31;
	goto ROT9;
	ROT8:
 ;cout << "\n";
 TI34 = 1;
TI33 = i+TI34;
i = TI33;
	goto ROT11;
	ROT10:
 ;cout << "\n";
 cout << "Matriz 2: ";
 cout << "\n";
 TI35 = 0;
i = TI35;
	ROT15:
TI36 = 4;
TB12 = i<TI36;
	TB15 = !TB12;
	if( TB15 ) goto ROT14;
TI37 = 0;
j = TI37;
	ROT13:
TI38 = 10;
TB13 = j<TI38;
	TB14 = !TB13;
	if( TB14 ) goto ROT12;
TI39 = i;
TI39 = TI39 * 10;
TI40 = TI39+j;
cout << matrix2[TI40];
 cout << " ";
 TI43 = 1;
TI42 = j+TI43;
j = TI42;
	goto ROT13;
	ROT12:
 ;cout << "\n";
 TI45 = 1;
TI44 = i+TI45;
i = TI44;
	goto ROT15;
	ROT14:
 ;TI46 = 0;
i = TI46;
	ROT21:
TI47 = 3;
TB16 = i<TI47;
	TB21 = !TB16;
	if( TB21 ) goto ROT20;
TI48 = 0;
j = TI48;
	ROT19:
TI49 = 10;
TB17 = j<TI49;
	TB20 = !TB17;
	if( TB20 ) goto ROT18;
TI50 = 0;
soma = TI50;
TI51 = 0;
k = TI51;
	ROT17:
TI52 = 4;
TB18 = k<TI52;
	TB19 = !TB18;
	if( TB19 ) goto ROT16;
TI53 = i;
TI53 = TI53 * 4;
TI54 = TI53+k;
TI56 = k;
TI56 = TI56 * 10;
TI57 = TI56+j;
TI60 = matrix1[TI54];
TI61 = matrix2[TI57];
TI59 = TI60*TI61;
TI63 = TI59;
TI62 = soma+TI63;
soma = TI62;
TI64 = i;
TI64 = TI64 * 10;
TI65 = TI64+j;
matrix_result[TI65] = soma;
TI68 = 1;
TI67 = k+TI68;
k = TI67;
	goto ROT17;
	ROT16:
 ;TI70 = 1;
TI69 = j+TI70;
j = TI69;
	goto ROT19;
	ROT18:
 ;TI72 = 1;
TI71 = i+TI72;
i = TI71;
	goto ROT21;
	ROT20:
 ;cout << "\nProduto das Matrizes 1 e 2: ";
 cout << "\n";
 TI73 = 0;
i = TI73;
	ROT25:
TI74 = 3;
TB22 = i<TI74;
	TB25 = !TB22;
	if( TB25 ) goto ROT24;
TI75 = 0;
j = TI75;
	ROT23:
TI76 = 10;
TB23 = j<TI76;
	TB24 = !TB23;
	if( TB24 ) goto ROT22;
TI77 = i;
TI77 = TI77 * 10;
TI78 = TI77+j;
cout << matrix_result[TI78];
 cout << " ";
 TI81 = 1;
TI80 = j+TI81;
j = TI80;
	goto ROT23;
	ROT22:
 ;cout << "\n";
 TI83 = 1;
TI82 = i+TI83;
i = TI82;
	goto ROT25;
	ROT24:
 ;cout << "\n";
 
}

