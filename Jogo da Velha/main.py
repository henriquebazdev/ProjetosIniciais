import os
from time import sleep
from random import randint


def jogar1x1():
    os.system("cls")
    matriz_principal = [[1, 2, 3], [4, 5 , 6], [7, 8, 9]]
    jogadas = 0
    continuar = 'S'
    while continuar == 'S':
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
                                    matriz_principal[l][c] = '\033[32mX\033[m'
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
                                    matriz_principal[l][c] = '\033[31mO\033[m'
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

        cont_x = 0
        cont_o = 0
        #verificação em linha
        for l in range(0, 3):
            cont_x = 0
            cont_o = 0
            for c in range(0, 3):
                if matriz_principal[l][c] == '\033[32mX\033[m':
                    cont_x += 1
                elif matriz_principal[l][c] == '\033[31mO\033[m':
                    cont_o += 1                  
            if cont_x == 3:
                os.system("cls")
                print("JOGADOR 1 VENCEU A PARTIDA!")
                os.system("pause")
                continuar = 'N'
                break
            elif cont_o == 3:
                os.system("cls")
                print("JOGADOR 2 VENCEU A PARTIDA!")
                os.system("pause")
                continuar = 'N'
                break
        
        cont_x = 0
        cont_o = 0
        #vericação em coluna
        for c in range(0, 3):
            cont_x = 0
            cont_o = 0
            for l in range(0, 3):
                if matriz_principal[l][c] == '\033[32mX\033[m':
                    cont_x += 1
                elif matriz_principal[l][c] == '\033[31mO\033[m':
                    cont_o += 1
            if cont_x == 3:
                os.system("cls")
                print("JOGADOR 1 VENCEU A PARTIDA!")
                os.system("pause")
                continuar = 'N'
                break
            elif cont_o == 3:
                os.system("cls")
                print("JOGADOR 2 VENCEU A PARTIDA!")
                os.system("pause")
                continuar = 'N'
                break
        
        #verificação em diagonal 1 a 3
        cont_x = 0
        cont_o = 0
        for l in range(0, 3):
            for c in range(0, 3):
                if l == c:
                    if matriz_principal[l][c] == '\033[32mX\033[m':
                        cont_x += 1
                    elif matriz_principal[l][c] == '\033[31mO\033[m':
                        cont_o += 1
            if cont_x == 3:
                os.system("cls")
                print("JOGADOR 1 VENCEU A PARTIDA!")
                os.system("pause")
                continuar = 'N'
                break
            elif cont_o == 3:
                os.system("cls")
                print("JOGADOR 2 VENCEU A PARTIDA!")
                os.system("pause")
                continuar = 'N'
                break
        
        #verificação em diagonal 3 a 7
        cont_x = 0
        cont_o = 0
        for l in range(0, 3):
            for c in range(0, 3):
                if (l == 0 and c == 2) or (l == 1 and c == 1) or (l == 2 and c == 0):
                    if matriz_principal[l][c] == '\033[32mX\033[m':
                        cont_x += 1
                    elif matriz_principal[l][c] == '\033[31mO\033[m':
                        cont_o += 1
            if cont_x == 3:
                os.system("cls")
                print("JOGADOR 1 VENCEU A PARTIDA!")
                os.system("pause")
                continuar = 'N'
                break
            elif cont_o == 3:
                os.system("cls")
                print("JOGADOR 2 VENCEU A PARTIDA!")
                os.system("pause")
                continuar = 'N'
                break

        if (jogadas == 9 and continuar == 'S'):
            os.system("cls")
            print("O JOGO FICOU EMPATADO!")
            os.system("pause")
            continuar = 'N'
            break

def computador():
    x = randint(1, 2)
    match x:
        case 1:
            os.system("cls")
            matriz_principal = [[1, 2, 3], [4, 5 , 6], [7, 8, 9]]
            jogadas = 0
            continuar = 'S'
            while continuar == 'S':
                try:
                    if jogadas % 2 == 0:
                        print('HUMANO', end='\n')
                    else:
                        print('COMPUTADOR', end='\n')

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
                                            matriz_principal[l][c] = '\033[32mX\033[m'
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
                            op = randint(1, 9)
                            x = 0
                            for l in range(0, 3):
                                for c in range(0, 3):
                                    if op == matriz_principal[l][c]:
                                        matriz_principal[l][c] = '\033[31mO\033[m'
                                        jogadas+=1
                                        x+=1
                                        break
                            if x == 0:
                                break
                            else:
                                print(f"COMPUTADOR colocou o O na posição {op}")
                                os.system("pause")
                                break
                    os.system("cls")
                except:
                    print('Opção inválida!')
                    print('Tente novamente...')
                    sleep(1)
                    os.system("cls")

                cont_x = 0
                cont_o = 0
                #verificação em linha
                for l in range(0, 3):
                    cont_x = 0
                    cont_o = 0
                    for c in range(0, 3):
                        if matriz_principal[l][c] == '\033[32mX\033[m':
                            cont_x += 1
                        elif matriz_principal[l][c] == '\033[31mO\033[m':
                            cont_o += 1                  
                    if cont_x == 3:
                        os.system("cls")
                        print("HUMANO VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                    elif cont_o == 3:
                        os.system("cls")
                        print("COMPUTADOR VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                
                cont_x = 0
                cont_o = 0
                #vericação em coluna
                for c in range(0, 3):
                    cont_x = 0
                    cont_o = 0
                    for l in range(0, 3):
                        if matriz_principal[l][c] == '\033[32mX\033[m':
                            cont_x += 1
                        elif matriz_principal[l][c] == '\033[31mO\033[m':
                            cont_o += 1
                    if cont_x == 3:
                        os.system("cls")
                        print("HUMANO VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                    elif cont_o == 3:
                        os.system("cls")
                        print("COMPUTADOR VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                
                #verificação em diagonal 1 a 3
                cont_x = 0
                cont_o = 0
                for l in range(0, 3):
                    for c in range(0, 3):
                        if l == c:
                            if matriz_principal[l][c] == '\033[32mX\033[m':
                                cont_x += 1
                            elif matriz_principal[l][c] == '\033[31mO\033[m':
                                cont_o += 1
                    if cont_x == 3:
                        os.system("cls")
                        print("HUMANO VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                    elif cont_o == 3:
                        os.system("cls")
                        print("COMPUTADOR VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                
                #verificação em diagonal 3 a 7
                cont_x = 0
                cont_o = 0
                for l in range(0, 3):
                    for c in range(0, 3):
                        if (l == 0 and c == 2) or (l == 1 and c == 1) or (l == 2 and c == 0):
                            if matriz_principal[l][c] == '\033[32mX\033[m':
                                cont_x += 1
                            elif matriz_principal[l][c] == '\033[31mO\033[m':
                                cont_o += 1
                    if cont_x == 3:
                        os.system("cls")
                        print("HUMANO VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                    elif cont_o == 3:
                        os.system("cls")
                        print("COMPUTADOR VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break

                if (jogadas == 9 and continuar == 'S'):
                    os.system("cls")
                    print("O JOGO FICOU EMPATADO!")
                    os.system("pause")
                    continuar = 'N'
                    break

        case 2:
            os.system("cls")
            matriz_principal = [[1, 2, 3], [4, 5 , 6], [7, 8, 9]]
            jogadas = 0
            continuar = 'S'
            while continuar == 'S':
                try:
                    if jogadas % 2 == 0:
                        print('COMPUTADOR', end='\n')
                    else:
                        print('HUMANO', end='\n')

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
                            op = randint(1, 9)
                            x = 0
                            for l in range(0, 3):
                                for c in range(0, 3):
                                    if op == matriz_principal[l][c]:
                                        matriz_principal[l][c] = '\033[32mX\033[m'
                                        jogadas+=1
                                        x+=1
                                        break
                            if x == 0:
                                break
                            else:
                                print(f"COMPUTADOR colocou o X na posição {op}")
                                os.system("pause")
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
                                            matriz_principal[l][c] = '\033[31mO\033[m'
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

                cont_x = 0
                cont_o = 0
                #verificação em linha
                for l in range(0, 3):
                    cont_x = 0
                    cont_o = 0
                    for c in range(0, 3):
                        if matriz_principal[l][c] == '\033[32mX\033[m':
                            cont_x += 1
                        elif matriz_principal[l][c] == '\033[31mO\033[m':
                            cont_o += 1                  
                    if cont_x == 3:
                        os.system("cls")
                        print("COMPUTADOR VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                    elif cont_o == 3:
                        os.system("cls")
                        print("HUMANO VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                
                cont_x = 0
                cont_o = 0
                #vericação em coluna
                for c in range(0, 3):
                    cont_x = 0
                    cont_o = 0
                    for l in range(0, 3):
                        if matriz_principal[l][c] == '\033[32mX\033[m':
                            cont_x += 1
                        elif matriz_principal[l][c] == '\033[31mO\033[m':
                            cont_o += 1
                    if cont_x == 3:
                        os.system("cls")
                        print("COMPUTADOR VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                    elif cont_o == 3:
                        os.system("cls")
                        print("HUMANO VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                
                #verificação em diagonal 1 a 3
                cont_x = 0
                cont_o = 0
                for l in range(0, 3):
                    for c in range(0, 3):
                        if l == c:
                            if matriz_principal[l][c] == '\033[32mX\033[m':
                                cont_x += 1
                            elif matriz_principal[l][c] == '\033[31mO\033[m':
                                cont_o += 1
                    if cont_x == 3:
                        os.system("cls")
                        print("COMPUTADOR VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                    elif cont_o == 3:
                        os.system("cls")
                        print("HUMANO VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                
                #verificação em diagonal 3 a 7
                cont_x = 0
                cont_o = 0
                for l in range(0, 3):
                    for c in range(0, 3):
                        if (l == 0 and c == 2) or (l == 1 and c == 1) or (l == 2 and c == 0):
                            if matriz_principal[l][c] == '\033[32mX\033[m':
                                cont_x += 1
                            elif matriz_principal[l][c] == '\033[31mO\033[m':
                                cont_o += 1
                    if cont_x == 3:
                        os.system("cls")
                        print("COMPUTADOR VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break
                    elif cont_o == 3:
                        os.system("cls")
                        print("HUMANO VENCEU A PARTIDA!")
                        os.system("pause")
                        continuar = 'N'
                        break

                if (jogadas == 9 and continuar == 'S'):
                    os.system("cls")
                    print("O JOGO FICOU EMPATADO!")
                    os.system("pause")
                    continuar = 'N'
                    break


#Menu inicial
while True:
    os.system("cls")
    
    try:
        print("=-" * 20)
        print("{:^40}".format('JOGO DA VELHA'))
        print("=-" * 20)
        print("     1 - Jogador 1 x Jogador 2")
        print("     2 - Jogar contra o computador")
        print("     3 - Sair")
        op = int(input("Opção: "))

        match op:
            case 1:
                jogar1x1()
                sleep(1)
            case 2:
                computador()
                sleep(1)
            case 3:
                os.system("cls")
                print("Encerrando o jogo...")
                sleep(1)
                os.system("pause")
                break
            case _:
                print("Opção inválida!")
                print("Tente novamente...")
                sleep(1)
    except:
        print("Opção inválida!")
        print("Tente novamente...")
        sleep(1)    
