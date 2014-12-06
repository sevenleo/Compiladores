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
int Temp_I43;
int Temp_I44;
int Temp_I45;
int Temp_I46;
int Temp_I47;
int Temp_I48;
int Temp_I49;
int Temp_I50;
int Temp_I51;
int Temp_I52;
int Temp_I53;
int Temp_I54;
int Temp_I55;
int Temp_I56;
int Temp_I57;
int Temp_I58;
int Temp_I59;
int Temp_I60;
int Temp_I61;
int Temp_I62;
int Temp_I63;
int Temp_I64;
int Temp_I65;
int Temp_I66;
int Temp_I67;
int Temp_I68;
int Temp_I69;
int Temp_I70;
int Temp_I71;
int Temp_I72;
int Temp_I73;
int Temp_I74;
int Temp_I75;
int Temp_I76;
int Temp_I77;
int Temp_I78;
int Temp_I79;
int Temp_I80;
int Temp_I81;
int Temp_I82;
int Temp_I83;
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
Temp_I0 = 0;
i = Temp_I0;
	ROT3:
Temp_I1 = 3;
Temp_B0 = i<Temp_I1;
	Temp_B3 = !Temp_B0;
	if( Temp_B3 ) goto ROT2;
Temp_I2 = 0;
j = Temp_I2;
	ROT1:
Temp_I3 = 4;
Temp_B1 = j<Temp_I3;
	Temp_B2 = !Temp_B1;
	if( Temp_B2 ) goto ROT0;
Temp_I4 = i;
Temp_I4 = Temp_I4 * 4;
Temp_I5 = Temp_I4+j;
Temp_I7 = j*i;
matrix1[Temp_I5] = Temp_I7;
Temp_I9 = 1;
Temp_I8 = j+Temp_I9;
j = Temp_I8;
	goto ROT1;
	ROT0:
 ;Temp_I11 = 1;
Temp_I10 = i+Temp_I11;
i = Temp_I10;
	goto ROT3;
	ROT2:
 ;Temp_I12 = 0;
i = Temp_I12;
	ROT7:
Temp_I13 = 4;
Temp_B4 = i<Temp_I13;
	Temp_B7 = !Temp_B4;
	if( Temp_B7 ) goto ROT6;
Temp_I14 = 0;
j = Temp_I14;
	ROT5:
Temp_I15 = 10;
Temp_B5 = j<Temp_I15;
	Temp_B6 = !Temp_B5;
	if( Temp_B6 ) goto ROT4;
Temp_I16 = i;
Temp_I16 = Temp_I16 * 10;
Temp_I17 = Temp_I16+j;
Temp_I19 = i+j;
matrix2[Temp_I17] = Temp_I19;
Temp_I21 = 1;
Temp_I20 = j+Temp_I21;
j = Temp_I20;
	goto ROT5;
	ROT4:
 ;Temp_I23 = 1;
Temp_I22 = i+Temp_I23;
i = Temp_I22;
	goto ROT7;
	ROT6:
 ;cout << "Matriz 1: ";
 cout << "\n";
 Temp_I24 = 0;
i = Temp_I24;
	ROT11:
Temp_I25 = 3;
Temp_B8 = i<Temp_I25;
	Temp_B11 = !Temp_B8;
	if( Temp_B11 ) goto ROT10;
Temp_I26 = 0;
j = Temp_I26;
	ROT9:
Temp_I27 = 4;
Temp_B9 = j<Temp_I27;
	Temp_B10 = !Temp_B9;
	if( Temp_B10 ) goto ROT8;
Temp_I28 = i;
Temp_I28 = Temp_I28 * 4;
Temp_I29 = Temp_I28+j;
cout << matrix1[Temp_I29];
 cout << " ";
 Temp_I32 = 1;
Temp_I31 = j+Temp_I32;
j = Temp_I31;
	goto ROT9;
	ROT8:
 ;cout << "\n";
 Temp_I34 = 1;
Temp_I33 = i+Temp_I34;
i = Temp_I33;
	goto ROT11;
	ROT10:
 ;cout << "\n";
 cout << "Matriz 2: ";
 cout << "\n";
 Temp_I35 = 0;
i = Temp_I35;
	ROT15:
Temp_I36 = 4;
Temp_B12 = i<Temp_I36;
	Temp_B15 = !Temp_B12;
	if( Temp_B15 ) goto ROT14;
Temp_I37 = 0;
j = Temp_I37;
	ROT13:
Temp_I38 = 10;
Temp_B13 = j<Temp_I38;
	Temp_B14 = !Temp_B13;
	if( Temp_B14 ) goto ROT12;
Temp_I39 = i;
Temp_I39 = Temp_I39 * 10;
Temp_I40 = Temp_I39+j;
cout << matrix2[Temp_I40];
 cout << " ";
 Temp_I43 = 1;
Temp_I42 = j+Temp_I43;
j = Temp_I42;
	goto ROT13;
	ROT12:
 ;cout << "\n";
 Temp_I45 = 1;
Temp_I44 = i+Temp_I45;
i = Temp_I44;
	goto ROT15;
	ROT14:
 ;Temp_I46 = 0;
i = Temp_I46;
	ROT21:
Temp_I47 = 3;
Temp_B16 = i<Temp_I47;
	Temp_B21 = !Temp_B16;
	if( Temp_B21 ) goto ROT20;
Temp_I48 = 0;
j = Temp_I48;
	ROT19:
Temp_I49 = 10;
Temp_B17 = j<Temp_I49;
	Temp_B20 = !Temp_B17;
	if( Temp_B20 ) goto ROT18;
Temp_I50 = 0;
soma = Temp_I50;
Temp_I51 = 0;
k = Temp_I51;
	ROT17:
Temp_I52 = 4;
Temp_B18 = k<Temp_I52;
	Temp_B19 = !Temp_B18;
	if( Temp_B19 ) goto ROT16;
Temp_I53 = i;
Temp_I53 = Temp_I53 * 4;
Temp_I54 = Temp_I53+k;
Temp_I56 = k;
Temp_I56 = Temp_I56 * 10;
Temp_I57 = Temp_I56+j;
Temp_I60 = matrix1[Temp_I54];
Temp_I61 = matrix2[Temp_I57];
Temp_I59 = Temp_I60*Temp_I61;
Temp_I63 = Temp_I59;
Temp_I62 = soma+Temp_I63;
soma = Temp_I62;
Temp_I64 = i;
Temp_I64 = Temp_I64 * 10;
Temp_I65 = Temp_I64+j;
matrix_result[Temp_I65] = soma;
Temp_I68 = 1;
Temp_I67 = k+Temp_I68;
k = Temp_I67;
	goto ROT17;
	ROT16:
 ;Temp_I70 = 1;
Temp_I69 = j+Temp_I70;
j = Temp_I69;
	goto ROT19;
	ROT18:
 ;Temp_I72 = 1;
Temp_I71 = i+Temp_I72;
i = Temp_I71;
	goto ROT21;
	ROT20:
 ;cout << "\nProduto das Matrizes 1 e 2: ";
 cout << "\n";
 Temp_I73 = 0;
i = Temp_I73;
	ROT25:
Temp_I74 = 3;
Temp_B22 = i<Temp_I74;
	Temp_B25 = !Temp_B22;
	if( Temp_B25 ) goto ROT24;
Temp_I75 = 0;
j = Temp_I75;
	ROT23:
Temp_I76 = 10;
Temp_B23 = j<Temp_I76;
	Temp_B24 = !Temp_B23;
	if( Temp_B24 ) goto ROT22;
Temp_I77 = i;
Temp_I77 = Temp_I77 * 10;
Temp_I78 = Temp_I77+j;
cout << matrix_result[Temp_I78];
 cout << " ";
 Temp_I81 = 1;
Temp_I80 = j+Temp_I81;
j = Temp_I80;
	goto ROT23;
	ROT22:
 ;cout << "\n";
 Temp_I83 = 1;
Temp_I82 = i+Temp_I83;
i = Temp_I82;
	goto ROT25;
	ROT24:
 ;cout << "\n";
 
}

