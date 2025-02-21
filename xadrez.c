#include <stdio.h>

int main()
{
    //Declarando as Variaveis.
   int i, j;
   
   //Laço de movimento (for) do Bispo
   for(i = 1; i <= 5; i++)
   {
       printf("O Bispo moveu para Casa Superior Direita.\n"); //Impressão do movimento
   }
   printf("\n\n");
   
   //Laço de movimento (while) da Torre
   i = 1; //A partir desse momento a variavel passa a ter valor 1.
   while(i <= 5)
   {
       printf("A Torre moveu para a Direita.\n");//Impressão do movimento
       i++; //incrementando a variavel para sair do loop
   }
   
   printf("\n\n"); //Pulando linha entre as peças.
   
   //Laço de movimento (do while) da Rainha
   j = 1; //A partir desse momento a variavel passa a ter valor 1.
   do 
   {
       printf("A Rainha se moveu para a Esquerda.\n");//Impressão do movimento
       j++;
   }while(j <= 8);
   
   printf("\n\n"); //Pulando linha entre as peças.
   
    //Laço de movimento (for, while) do Cavalo (loop aninhados)
    for(i = 1; i <= 2; i++)
    {
        j = i;
        printf("O Cavalo se Moveu para a Esquerda.\n");//Impressão do movimento
        while(j == 2)
        {
            printf("O Cavalo se Moveu para a Baixo.\n");//Impressão do movimento
            j++; //incrementando a variavel para sair do loop
        }
         
    }
    return 0;
}