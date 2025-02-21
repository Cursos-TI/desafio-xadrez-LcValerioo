#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    //Declaração das variaveis
    int opcaoPeca, opcaoMov, i, qtdMov;
    //Inicializando o primeiro laço do Menu
    do 
    {
    //Escolha da Peça de Xadrez a ser movimentada
    printf("\n\nQual peça vai usar agora ?\n");
    printf("1. Rainha\n");
    printf("2. Bispo\n");
    printf("3. Torre\n");
    printf("4. Para Sair\n");
    scanf("%d", &opcaoPeca);
    
    switch(opcaoPeca)
    {
        //Escolha da direção para movimentar a peça
        case 1:
        printf("Você deseja mover a Rainha para qual direção ?\n");
        printf("1. Cima (Horizontal)\n");
        printf("2. Baixo (Horizontal)\n");
        printf("3. Direita (Horizontal)\n");
        printf("4. Esquerda (Horizontal)\n");
        printf("5. Cima Direita (Diagonal)\n");
        printf("6. Cima Esquerda (Diagonal)\n");
        printf("7. Baixo Direita (Diagonal)\n");
        printf("8. Baixo Esquerda (Diagonal)\n");
        scanf("%d", &opcaoMov);
        
        switch(opcaoMov)
        {
            case 1: 
            printf("Quer andar quantas casas para Cima ?: ");
            scanf("%d", &qtdMov);
            //Inicializando o Loop para movimentar a peça
            for(i = 1; i <= qtdMov; i++)
            {
                printf("Andou %d casa(s) para Cima!\n", i); //Printando na tela o movimento da peça
            }
            break;
            case 2: 
            printf("Quer andar quantas casas para Baixo ?: ");
            scanf("%d", &qtdMov);
            for(i = 1; i <= qtdMov; i++)
            {
                printf("Andou %d casa(s) para Baixo!\n", i);
            }
            break;
            case 3:
            printf("Quer andar quantas casas para Direita ?: ");
            scanf("%d", &qtdMov);
            for(i = 1; i <= qtdMov; i++)
            {
                printf("Andou %d casa(s) para Direita!\n", i);
            }break;
            case 4: 
            printf("Quer andar quantas casas para Esquerda ?: ");
            scanf("%d", &qtdMov);
            for(i = 1; i <= qtdMov; i++)
            {
                printf("Andou %d casa(s) para Esquerda!\n", i);
            }
            break;
            case 5: 
            printf("Quer andar quantas casas para Cima Direita (Diagonal) ?: ");
            scanf("%d", &qtdMov);
            for(i = 1; i <= qtdMov; i++)
            {
                printf("Andou %d casa(s) para Cima Direita (Diagonal)!\n", i);
            }
            break;
            case 6: 
            printf("Quer andar quantas casas para Cima Esquerda (Diagonal) ?: ");
            scanf("%d", &qtdMov);
            for(i = 1; i <= qtdMov; i++)
            {
                printf("Andou %d casa(s) para Cima Esquerda (Diagonal)!\n", i);
            }
            break;
            case 7: 
            printf("Quer andar quantas casas para Baixo Direita (Diagonal) ?: ");
            scanf("%d", &qtdMov);
            for(i = 1; i <= qtdMov; i++)
            {
                printf("Andou %d casa(s) para Baixo Direita (Diagonal)!\n", i);
            }
            break;
            case 8: 
            printf("Quer andar quantas casas para Baixo Esquerda (Diagonal) ?: ");
            scanf("%d", &qtdMov);
            for(i = 1; i <= qtdMov; i++)
            {
                printf("Andou %d casa(s) para Baixo Esquerda (Diagonal)!\n", i);
            }
            break;
            default: printf("Essa Opção só não é mais inválida do que VOCÊ !\n");
        }
        
        break;
        case 2:
        i = 1;
        //Escolha da direção para movimentar a peça
        printf("Você deseja mover o Bispo para qual direção ?\n");
        printf("1. Cima Direita (Diagonal)\n");
        printf("2. Cima Esquerda (Diagonal)\n");
        printf("3. Baixo Direita (Diagonal)\n");
        printf("4. Baixo Esquerda (Diagonal)\n");
        scanf("%d", &opcaoMov);
        
        
        switch(opcaoMov)
        {

            case 1: 
            printf("Quer andar quantas casas para Cima Direita (Diagonal) ?: ");
            scanf("%d", &qtdMov);
            
            //Inicializando o Loop para movimentar a peça
            while(i <= qtdMov)
            {
                printf("Andou %d casa(s) para Cima Direita (Diagonal)!\n", i); //Printando na tela o movimento da peça
                i++;
            }
            break;
            case 2: 
            printf("Quer andar quantas casas para Cima Esquerda (Diagonal) ?: ");
            scanf("%d", &qtdMov);
            
            while(i <= qtdMov)
            {
                printf("Andou %d casa(s) para Cima Esquerda (Diagonal)!\n", i);
                i++;
            }
            break;
            case 3: 
            printf("Quer andar quantas casas para Baixo Direita (Diagonal) ?: ");
            scanf("%d", &qtdMov);
            
            while(i <= qtdMov)
            {
                printf("Andou %d casa(s) para Baixo Direita (Diagonal)!\n", i);
                i++;
            }
            break;
            case 4: 
            printf("Quer andar quantas casas para Baixo Esquerda (Diagonal) ?: ");
            scanf("%d", &qtdMov);
            
            while(i <= qtdMov)
            {
                printf("Andou %d casa(s) para Baixo Esquerda (Diagonal)!\n", i);
                i++;
            }
            break;
            default: printf("Essa Opção só não é mais inválida do que VOCÊ !\n");
        }
        
        break;
        case 3:
        i = 1;
        //Escolha da direção para movimentar a peça
        printf("Você deseja mover a Torre para qual direção ?\n");
        printf("1. Cima (Horizontal)\n");
        printf("2. Baixo (Horizontal)\n");
        printf("3. Direita (Horizontal)\n");
        printf("4. Esquerda (Horizontal)\n");
        scanf("%d", &opcaoMov);
        
        switch(opcaoMov)
        {
            case 1: 
            
            printf("Quer andar quantas casas para Cima ?: ");
            scanf("%d", &qtdMov);
            
            //Inicializando o Loop para movimentar a peça
            do
            {   
                printf("Andou %d casa(s) para Cima!\n", i); //Printando na tela o movimento da peça
                i++;
            } while(i <= qtdMov);
            break;
            case 2: 
            printf("Quer andar quantas casas para Baixo ?: ");
            scanf("%d", &qtdMov);
            
            do
            {
                printf("Andou %d casa(s) para Baixo!\n", i);
                i++;
            } while(i <= qtdMov);
            break;
            case 3:
            printf("Quer andar quantas casas para Direita ?: ");
            scanf("%d", &qtdMov);
            
            do
            {
                printf("Andou %d casa(s) para Direita!\n", i);
                i++;
            }while(i <= qtdMov);
            break;
            case 4: 
            printf("Quer andar quantas casas para Esquerda ?: ");
            scanf("%d", &qtdMov);
            
            do
            {
                printf("Andou %d casa(s) para Esquerda!\n", i);
                i++;
            }while(i <= qtdMov); 
            break;
            default: printf("Essa Opção só não é mais inválida do que VOCÊ !\n");
        }
    
       case 4:
        printf("Saindo do Loop...\n");
        break;
        default: printf("Opção inválida vida!\n");
        
    }
    }while(opcaoPeca != 4);

    
    
    printf("\n\n---FIM DO PROGRAMA---\n\n");

    return 0;
}
