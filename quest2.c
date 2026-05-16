#include <stdio.h>

#define TAMANHO 15

int main()
{
   int numeros[TAMANHO];
   int frequencia[TAMANHO] = {0};  // Inicializa todos com 0
   int i, j, verificado;
   
   // ===== LEITURA DOS NÚMEROS =====
   printf("Digite 15 numeros inteiros:\n");
   for(i = 0; i < TAMANHO; i++){
      printf("Numero %2d: ", i + 1);
      scanf("%i", &numeros[i]);
   }
   
   // ===== CONTAGEM DE FREQUÊNCIAS =====
   for(i = 0; i < TAMANHO; i++){
      for(j = 0; j < TAMANHO; j++){
         if(numeros[i] == numeros[j]){
            frequencia[i]++;
         }
      }
   }
   
   // ===== EXIBIÇÃO DOS RESULTADOS =====
   printf("\n");
   printf("=====================================\n");
   printf("  FREQUENCIA DOS NUMEROS DIGITADOS  \n");
   printf("=====================================\n");
   
   for(i = 0; i < TAMANHO; i++){
      // Verifica se o número já foi exibido
      verificado = 0;
      for(j = 0; j < i; j++){
         if(numeros[i] == numeros[j]){
            verificado = 1;
            break;
         }
      }
      
      // Exibe apenas uma vez cada número único
      if(!verificado){
         printf("Numero %3d: %d vez(es)\n", numeros[i], frequencia[i]);
      }
   }
   
   printf("=====================================\n");
   
   return 0;
}
