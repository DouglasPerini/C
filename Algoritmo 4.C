#include <stdio.h>

int main (){
    //Declaração de variáveis
    int polegada, centimetros;

    //Entrada
    printf("informe o valor em polegada: ");
    scanf("%d", &polegada);

    //Processamento
    centimetros = (polegada / 2.54);

    //Saída
    printf("%d centímetros em polegadas é %d", polegada, centimetros);
}