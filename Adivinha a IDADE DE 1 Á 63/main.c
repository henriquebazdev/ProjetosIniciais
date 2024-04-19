#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int primeira_carta()
{
	system("cls");
	
	int primeira_carta[8][4];
	int l, c = 0;
	int aux = 1;
	for (l = 0; l < 8; l++)
	{
		for (c = 0; c < 4; c++)
		{
			primeira_carta[l][c] = aux;
			aux+=2;
			printf("[ %*d ]", 2, primeira_carta[l][c]);
		}
		printf("\n");
	}
	
	int x = 0;
	for (x = 0; x == 0;)
	{
		char opcao[1];
		printf("O n�mero pensado esta na primeira carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			return "S";
			system("pause");
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			return "N";
			system("pause");
		}
		else
		{
			system("cls");
			printf("Op��o inv�lida!\n");
			printf("Tente novamente...\n");
			system("pause");
		}
	}
}


int coleta()
{
	
	int respostas[6];
	int dado;
	
	dado = primeira_carta();
	respostas[0] = dado;
	printf("%s\n\n", respostas[0]);
	
	system("pause");
	
}

int jogar()
{
	system("cls");
	printf("Instru��es:\n\n");
	printf("1. Pense em um n�mero inteiro entre 1 e 63.\n\n");
	printf("2. O programa far� uma s�rie de perguntas para tentar adivinhar o n�mero que voc� pensou.\n\n");
	printf("3. Continue respondendo �s perguntas at� a �ltima matriz.\n\n");
	printf("4. Responda todas as perguntas com aten��o pois n�o � poss�vel voltar para corrigir uma resposta.\n\n");
	printf("5. Ao final do jogo, o programa revelar� o n�mero que voc� pensou e o n�mero total de perguntas feitas.\n\n");
	system("pause");
	
	coleta();
	
	system("cls");
}

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	int x = 0; 
	
	for (x = 1; x == 1;)
	{	
		int opcao = 0;
		
		system("cls");
		
		printf("### Adivinha a IDADE DE 1 � 63 ###\n\n");
		printf("Escolha:\n");
		printf("\t1 - Jogar\n");
		printf("\t2 - Sair do jogo\n");
		printf("Op��o: ");
		scanf("%d", &opcao);
		
		switch (opcao) 
		{
			case 1:
				jogar();
				break;
			case 2:
				system("cls");
				printf("Encerrando...\n");
				printf("Obrigado, volte sempre!\n");
				system("pause");
				return 0;
				break;
			default:
				system("cls");
				printf("Op��o inv�lida! Tente novamente...\n\n");
				system("pause");
				break;
		}
	}
}

