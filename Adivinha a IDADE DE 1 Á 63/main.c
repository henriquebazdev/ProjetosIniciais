#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int primeira_carta()
{	
	int x = 0;
	for (x = 0; x == 0;)
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
		
		char opcao[1];
		printf("O número pensado esta na primeira carta? 'S' ou 'N'\n");
		printf("Opção: ");
		scanf("%s", &opcao);
		
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O número pensado esta nesta carta...\n");
			system("pause");
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O número pensado não esta nesta carta...\n");
			system("pause");
			return "N";
		}
		else
		{
			system("cls");
			printf("Opção inválida!\n");
			printf("Tente novamente...\n");
			system("pause");
		}
	}
}



int segunda_carta()
{	
	int x = 0;
	for (x = 0; x == 0;)
	{
		system("cls");
		int segunda_carta[8][4];
		int l, c = 0;
		int aux = 2;
		for (l = 0; l < 8; l++)
		{
			for (c = 0; c < 4; c++)
			{
				segunda_carta[l][c] = aux;
				
				if (c == 1 || c == 3)
				{
					aux+=3;
				}
				else 
				{
					aux++;
				}
				
				printf("[ %*d ]", 2, segunda_carta[l][c]);
			}
			printf("\n");
		}
		
		char opcao[1];
		printf("O número pensado esta na segunda carta? 'S' ou 'N'\n");
		printf("Opção: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O número pensado esta nesta carta...\n");
			system("pause");
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O número pensado não esta nesta carta...\n");
			system("pause");
			return "N";
		}
		else
		{
			system("cls");
			printf("Opção inválida!\n");
			printf("Tente novamente...\n");
			system("pause");
		}
	}
}



int terceira_carta()
{	
	int x = 0;
	for (x = 0; x == 0;)
	{
		system("cls");
		int terceira_carta[8][4];
		int l, c = 0;
		int aux = 4;
		for (l = 0; l < 8; l++)
		{
			for (c = 0; c < 4; c++)
			{
				terceira_carta[l][c] = aux;
				
				if (c == 3)
				{
					aux+=5;
				}
				else 
				{
					aux++;
				}
				
				printf("[ %*d ]", 2, terceira_carta[l][c]);
			}
			printf("\n");
		}
		
		char opcao[1];
		printf("O número pensado esta na terceira carta? 'S' ou 'N'\n");
		printf("Opção: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O número pensado esta nesta carta...\n");
			system("pause");
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O número pensado não esta nesta carta...\n");
			system("pause");
			return "N";
		}
		else
		{
			system("cls");
			printf("Opção inválida!\n");
			printf("Tente novamente...\n");
			system("pause");
		}
	}
}



int quarta_carta()
{	
	int x = 0;
	for (x = 0; x == 0;)
	{
		system("cls");
		int quarta_carta[8][4];
		int l, c = 0;
		int aux = 8;
		for (l = 0; l < 8; l++)
		{
			for (c = 0; c < 4; c++)
			{
				quarta_carta[l][c] = aux;
				
				if ((l == 1 && c == 3) || (l == 3 && c == 3) || (l == 5 && c == 3))
				{
					aux+=9;
				}
				else 
				{
					aux++;
				}
				
				printf("[ %*d ]", 2, quarta_carta[l][c]);
			}
			printf("\n");
		}
		
		char opcao[1];
		printf("O número pensado esta na quarta carta? 'S' ou 'N'\n");
		printf("Opção: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O número pensado esta nesta carta...\n");
			system("pause");
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O número pensado não esta nesta carta...\n");
			system("pause");
			return "N";
		}
		else
		{
			system("cls");
			printf("Opção inválida!\n");
			printf("Tente novamente...\n");
			system("pause");
		}
	}
}



int coleta()
{
	
	int respostas[6];
	int dado;
	
	//primeira carta
	dado = primeira_carta();
	respostas[0] = dado;
	
	//segunda carta
	dado = segunda_carta();
	respostas[1] = dado;
	
	//terceira carta
	dado = terceira_carta();
	respostas[2] = dado;
	
	//quarta carta
	dado = quarta_carta();
	respostas[3] = dado;
	
	//prints
	printf("%s ", respostas[0]);
	printf("%s ", respostas[1]);
	printf("%s ", respostas[2]);
	printf("%s ", respostas[3]);
	printf("\n");
	
	system("pause");
	
}

int jogar()
{
	system("cls");
	printf("Instruções:\n\n");
	printf("1. Pense em um número inteiro entre 1 e 63.\n\n");
	printf("2. O programa fará uma série de perguntas para tentar adivinhar o número que você pensou.\n\n");
	printf("3. Continue respondendo às perguntas até a última matriz.\n\n");
	printf("4. Responda todas as perguntas com atenção pois não é possível voltar para corrigir uma resposta.\n\n");
	printf("5. Ao final do jogo, o programa revelará o número que você pensou e o número total de perguntas feitas.\n\n");
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
		
		printf("### Adivinha a IDADE DE 1 Á 63 ###\n\n");
		printf("Escolha:\n");
		printf("\t1 - Jogar\n");
		printf("\t2 - Sair do jogo\n");
		printf("Opção: ");
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
				printf("Opção inválida! Tente novamente...\n\n");
				system("pause");
				break;
		}
	}
}

