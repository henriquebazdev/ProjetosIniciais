#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

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

