#include <stdio.h>
#include<stdlib.h>

/*
void troca (int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Valor de x em troca(): %d \n", *x);
    printf("Valor de y em troca(): %d \n", *y);

}
*/





int main (void) {

    /*
    int num1, num2, num3, soma;

    printf("Entre com 3 valores inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
  
    printf("valores lidos: %d, %d, %d\n", num1, num2, num3);

    soma = num1 * num2 * num3;

    printf("Resultado da multiplicacao: %d\n", soma);

    if(soma > 900){
        printf("Quanto numero hein kkk");
    }else{
        printf("Mixuruca");
    }

    int a;

    printf("\nEntre com um numero inteiro: ");
    scanf("%d", &a);
    if (a % 2 == 0){
        printf("O numero e par");
    }else{
        printf("O numero e impar");
    }
    return 0; ]
    */
   /*
   int a = 5;
   int b = 10;

   printf("Valor de a antes da troca: %d \n", a);
   printf("Valor de b antes da troca: %d \n", b);

   troca(&a,&b);
    
   printf("Valor de a depois da troca: %d \n", a);
   printf("Valor de b depois da troca: %d \n", b);
   */

    int vetor[4] = {0, 1, 2, 3}, i;

    for(i=0; i<= 4; i++){
        
        printf("vetor[%d] = %d\n", i, vetor[i]);
        
    }

    return 0;

}

