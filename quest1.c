#include <stdio.h>

int main()
{
   int soma = 0;
   int maior = 0;
   int menor = 999;
   int quantidade = 0;
   float media = 0;
   int idade;
   
   while(1){
      printf("Digite a idade (negativa para sair): ");
      scanf("%i", &idade);
      
      if(idade < 0) break;  // Sai apenas se negativo
      
      soma += idade;
      quantidade++;
      if(idade > maior) maior = idade;
      if(idade < menor) menor = idade;
   }
   
   if(quantidade > 0){
      media = (float)soma / quantidade;
      printf("\n=== RESULTADO ===\n");
      printf("Quantidade: %i\n", quantidade);
      printf("Media: %.2f\n", media);
      printf("Maior: %i\n", maior);
      printf("Menor: %i\n", menor);
   }
   else{
      printf("Nenhuma idade valida!\n");
   }
   
   return 0;
}