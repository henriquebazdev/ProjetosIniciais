#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int primeira_carta()
{	
	for (;;)
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
		printf("O n�mero pensado esta na primeira carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
		
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return 1;
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return 0;
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



int segunda_carta()
{
	for (;;)
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
		printf("O n�mero pensado esta na segunda carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return 2;
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return 0;
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



int terceira_carta()
{	
	for (;;)
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
		printf("O n�mero pensado esta na terceira carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return 4;
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return 0;
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



int quarta_carta()
{	
	for (;;)
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
		printf("O n�mero pensado esta na quarta carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return 8;
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return 0;
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


int quinta_carta()
{	
	for (;;)
	{
		system("cls");
		int quinta_carta[8][4];
		int l, c = 0;
		int aux = 16;
		for (l = 0; l < 8; l++)
		{
			for (c = 0; c < 4; c++)
			{
				quinta_carta[l][c] = aux;
				
				if (l == 3 && c == 3)
				{
					aux+=17;
				}
				else 
				{
					aux++;
				}
				
				printf("[ %*d ]", 2, quinta_carta[l][c]);
			}
			printf("\n");
		}
		
		char opcao[1];
		printf("O n�mero pensado esta na quinta carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return 16;
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return 0;
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



int sexta_carta()
{
	for (;;)
	{
		system("cls");
		int sexta_carta[8][4];
		int l, c = 0;
		int aux = 32;
		for (l = 0; l < 8; l++)
		{
			for (c = 0; c < 4; c++)
			{
				sexta_carta[l][c] = aux;
				aux++;	
				printf("[ %*d ]", 2, sexta_carta[l][c]);
			}
			printf("\n");
		}
		
		char opcao[1];
		printf("O n�mero pensado esta na sexta carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return 32;
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return 0;
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
	
	int contador = 0;
	
	//primeira carta
	contador += primeira_carta();
	
	//segunda carta
	contador += segunda_carta();
	
	//terceira carta
	contador += terceira_carta();
	
	//quarta carta
	contador += quarta_carta();
	
	//quinta carta
	contador += quinta_carta();
	
	//sexta carta
	contador += sexta_carta();
	
	if (contador == 0)
	{
		system("cls");
		printf("N�mero pensado � inv�lido!\n");
		printf("Tente novamente...\n");
		system("pause");
		coleta();
	}
	else
	{
		final(contador);
	}
}



int final(int resultado)
{
	system("cls");
	printf("\n\n");
	printf("O n�mero pensado �: %d", resultado);
	printf("\n\n");
	system("pause");
	
	for (;;)
	{
		system("cls");
		int opcao = 0;
		printf("1 - Continuar a jogar\n");
		printf("2 - Sair do jogo\n");
		printf("Op��o: ");
		scanf("%d", &opcao);
		
		while(getchar() != '\n');
		
		if (opcao == 1)
		{
			jogar();
			break;
		}
		else if (opcao == 2)
		{
			sair();
			break;
		}
		else
		{
			system("cls");
			printf("Op��o inv�lida!\n");
			printf("Tente novamente...\n");
			system("pause");
		}
	}
	return 0;
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

	
	for (;;)
	{	
		int opcao = 0;
		
		system("cls");
		
		printf("### Adivinha a IDADE DE 1 � 63 ###\n\n");
		printf("Escolha:\n");
		printf("\t1 - Jogar\n");
		printf("\t2 - Sair do jogo\n");
		printf("Op��o: ");
		scanf("%d", &opcao);
		
		while(getchar() != '\n');
		
		if (opcao == 1)
		{
			jogar();
			break;
		}
		else if (opcao == 2)
		{
			sair();
			break;
		}
		else
		{
			system("cls");
			printf("Op��o inv�lida! Tente novamente...\n\n");
			system("pause");	
		}
	}
	return 0;
}



int sair()
{
	system("cls");
	printf("Encerrando...\n");
	printf("Volte sempre!\n");
	system("pause");
	return 0;
}

