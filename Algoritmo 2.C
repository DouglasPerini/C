#include <stdio.h>

//Declaração de variavel 
int main(){
    int quantidade_minima, quantidade_maxima;
    float estoque_medio;

// Entrada
    printf("informe a quantidade mínima: " );
    scanf("%d", &quantidade_minima);

    printf("informe a quantidade máxima: " );
    scanf("%d", &quantidade_maxima);

//Processamento 
estoque_medio = (quantidade_minima + quantidade_maxima) /2;

//Saída
printf("O estoque médio é %.2f", estoque_medio);

}