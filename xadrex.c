#include <stdio.h>

int main(){
    
printf("*** Movimento das Peças de Xadrex *** \n");

//Torre: linha reta horizontalmente ou verticalmente. (for)
  printf("\nMovimento da Torre: \n");
  for (int i = 1; i <= 5; i++)
  {
    printf("Direita - casa %d\n", i);
  }

//Bispo: Move-se na diagonal. (while)
printf("\nMovimento do Bispo: \n");
int casa = 1;
   while (casa <= 5)
   {
    printf("Cima, Direita - casa %d\n", casa);
    casa++;
   }
//Rainha: Move-se em todas as direções. (do while)
printf("\nMovimento da Rainha: \n");
int posicao = 1;
do
{
    printf("Esquerda - casa %d\n", posicao);
    posicao++;
} while (posicao <= 8);;

  
return 0;

}