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
		printf("O n�mero pensado esta na primeira carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
		
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return "N";
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
		printf("O n�mero pensado esta na segunda carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return "N";
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
		printf("O n�mero pensado esta na terceira carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return "N";
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
		printf("O n�mero pensado esta na quarta carta? 'S' ou 'N'\n");
		printf("Op��o: ");
		scanf("%s", &opcao);
	
		if (strcmp(opcao, "S") == 0 || strcmp(opcao, "s") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado esta nesta carta...\n");
			system("pause");
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return "N";
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
	int x = 0;
	for (x = 0; x == 0;)
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
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return "N";
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
	int x = 0;
	for (x = 0; x == 0;)
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
			return "S";
		}
		else if (strcmp(opcao, "N") == 0 || strcmp(opcao, "n") == 0)
		{
			system("cls");
			printf("Ok! O n�mero pensado n�o esta nesta carta...\n");
			system("pause");
			return "N";
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
	
	//quinta carta
	dado = quinta_carta();
	respostas[4] = dado;
	
	//sexta carta
	dado = sexta_carta();
	respostas[5] = dado;
	
	analise(respostas);
}

int analise(int vetor[6])
{
	printf("%s \n", vetor[0]); //excluir
	printf("%s \n", vetor[1]);
	printf("%s \n", vetor[2]);
	printf("%s \n", vetor[3]);
	printf("%s \n", vetor[4]);
	printf("%s \n", vetor[5]);
	
	system("pause");
	system("cls");
	
	int e;
	int sim = 0;
	int nao = 0;
	for (e = 0; e < 6; e++)
	{
		if (vetor[e] == "N")
		{
			nao++;
		}
		else if (vetor[e] == "S")
		{
			sim++;
		}
	}
	
	if (sim == 6)
	{
		final(63);
	}
	else if (nao == 6)
	{
		printf("Voc� n�o pensou em um n�mero v�lido!\n");
		printf("Tente novamente...\n");
		system("pause");
		jogar();
	}
	else 
	{
		//cria��o vetor principal
		int vetor_principal[63];
		int k;
		int e = 1;
		for (k = 0; k < 63; k++)
		{
			vetor_principal[k] = e;
			printf("%d ", vetor_principal[k]); //excluir
			e++;
		}
		
		//verifica��o primeira carta
		if (vetor[0] == "N")
		{
			int primeira_carta[8][4];
			int linha, coluna = 0;
			int aux = 1;
			for (linha = 0; linha < 8; linha++)
			{
				for (coluna = 0; coluna < 4; coluna++)
				{
					primeira_carta[linha][coluna] = aux;
					aux+=2;
				}
			}
			
			int l, c = 0;
			int j = 0;
			for (j = 0; j < 63; j++)
			{
				for (l = 0; l < 8; l++)
				{
					for (c = 0; c < 4; c++)
					{		
						if (primeira_carta[l][c] == vetor_principal[j])
						{
							vetor_principal[j] = 0;
							j++;
						}
					}
				}
			}
			
			for (k = 0; k < 63; k++)
			{
				printf("%d ", vetor_principal[k]); //excluir
			}
			printf("\n");
			system("pause");
		}
		
		//verifica��o segunda carta
	}
}

int final(int resultado)
{
	system("cls");
	printf("\n\n");
	printf("O n�mero pensado �: %d", resultado);
	printf("\n\n");
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

