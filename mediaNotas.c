//MEDIA DE DUAS NOTAS

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(){

	setlocale(LC_ALL,"Portuguese");
	
	char nome[100];
	float num1,num2,m=0; //m - m�dia das notas
	
	printf("\t*****Nome e M�dia***");
	printf("\nDigite o nome: "); //inser��o de nota
	gets(nome);
	fflush(stdin);
	
	printf("\nDigite a primeira nota:");
	scanf("%f", &num1); //
	printf("\nDigite o segunda nota:");
	scanf("%f", &num2);
	
	m=(num1+num2)/2; //calculo da m�dia
	system("cls");
	printf("\n\t*****Nome e M�dia***");
	printf("\nNome %s e a M�dia entre %.2f e %.2f � %.2f", nome,num1,num2,m);
	getch();
	
	return 0;	
}

