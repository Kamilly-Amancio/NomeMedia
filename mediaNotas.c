//MEDIA DE DUAS NOTAS

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(){

	setlocale(LC_ALL,"Portuguese");
	
	char nome[100];
	float num1,num2,m=0; //m - média das notas
	
	printf("\t*****Nome e Média***");
	printf("\nDigite o nome: "); //inserção de nota
	gets(nome);
	fflush(stdin);
	
	printf("\nDigite a primeira nota:");
	scanf("%f", &num1); //
	printf("\nDigite o segunda nota:");
	scanf("%f", &num2);
	
	m=(num1+num2)/2; //calculo da média
	system("cls");
	printf("\n\t*****Nome e Média***");
	printf("\nNome %s e a Média entre %.2f e %.2f é %.2f", nome,num1,num2,m);
	getch();
	
	return 0;	
}

