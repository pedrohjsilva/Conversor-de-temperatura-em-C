#include <stdio.h>
#include <locale.h>

/*
Centro Federal de Educação Técnológica de Minas Gerais
Graduação em Engenharia Mecânica
Pedro Henrique de Jesus Soares Silva
*/

int main()
{
setlocale (LC_ALL, "");
setlocale (LC_CTYPE, "pt BR.UTF-8");
float temp_F, temp_C;

printf("Este é um programa que permite a conversão de temperatura.");
Sleep(4000);
system("cls");

printf("Ao inserir um valor em graus Celsius, você descobrirá o valor correspondente na escala Farenheit.");
Sleep(4000);
system("cls");

printf("Para começarmos, digite o valor na escala Celsius\n\n");
scanf("%f", &temp_F);
system("cls");

printf("Calculando");
Sleep(1000);
system("cls");

printf("Calculando .");
Sleep(1000);
system("cls");

printf("Calculando . .");
Sleep(1000);
system("cls");

printf("Calculando . . .");
Sleep(1000);
system("cls");

printf("\nO valor inserido em graus Celsius corresponde a %lf graus Farenheit", (temp_F - 32)*(5.0 / 9));
return 0;
}
