import os
from time import sleep

def jogar1x1():
    os.system("cls")
    matriz_principal = [[1, 2, 3], [4, 5 , 6], [7, 8, 9]]
    jogadas = 0
    while True:
        try:
            if jogadas % 2 == 0:
                print('JOGADOR 1', end='\n')
            else:
                print('JOGADOR 2', end='\n')

            for l in range(0, 3):
                for c in range(0, 3):
                    if (c == 0 or c == 1):
                        print(f' {matriz_principal[l][c]} ', end=' | ')
                    else:
                        print(f' {matriz_principal[l][c]} ', end=' ')
                print()
                print('-' * 15)

            if (jogadas % 2 == 0):
                while True:
                    op = int(input('Em qual posição você deseja colocar o X? '))
                    if op < 1 or op > 9:
                        print("Opção inválida!")
                        print("Tente novamente...")
                        sleep(1)
                        break
                    else:
                        x = 0
                        for l in range(0, 3):
                            for c in range(0, 3):
                                if op == matriz_principal[l][c]:
                                    matriz_principal[l][c] = 'X'
                                    jogadas+=1
                                    x+=1
                                    break
                        if x == 0:
                            print("Opção digitada já foi preenchida!")
                            print("Tente novamente...")
                            sleep(1)
                            break
                        else: 
                            break
            else:
                while True:
                    op = int(input('Em qual posição você deseja colocar o O? '))
                    if op < 1 or op > 9:
                        print("Opção inválida!")
                        print("Tente novamente...")
                        sleep(1)
                        break
                    else:
                        x = 0
                        for l in range(0, 3):
                            for c in range(0, 3):
                                if op == matriz_principal[l][c]:
                                    matriz_principal[l][c] = 'O'
                                    jogadas+=1
                                    x+=1
                                    break
                        if x == 0:
                            print("Opção digitada já foi preenchida!")
                            print("Tente novamente...")
                            sleep(1)
                            break
                        else:
                            break
            os.system("cls")
        except:
            print('Opção inválida!')
            print('Tente novamente...')
            sleep(1)
            os.system("cls")

#Menu inicial
while True:
    os.system("cls")

    try:
        print("=-" * 20)
        print("{:^40}".format('JOGO DA VELHA'))
        print("=-" * 20)
        print("     1 - Jogador 1 x Jogador 2")
        print("     2 - Sair")
        op = int(input("Opção: "))

        os.system("cls")

        match op:
            case 1:
                jogar1x1()
                sleep(1)
            case 2:
                print("Encerrando o jogo...")
                sleep(1)
                os.system("pause")
                break
            case _:
                print("Opção inválida!")
                print("Tente novamente...")
                sleep(1)
    except:
        os.system("cls")
        print("Opção inválida!")
        print("Tente novamente...")
        sleep(1)    
