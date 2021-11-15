#include <stdio.h>
//stdio inclui bibliotecas da linguagem C para a utilização do programa
//IO são entradas  saídas
int main(){
    int num1, num2, soma, multiplicacao;
//Linha 6 declaração de variáveis apresentadas 
//Entrada
    printf("Informe o primeiro número:  ");
    scanf("%d", &num1);   
    printf("Informe o segundo número:   ");
    scanf("%d", &num2);
//printf, apresentação do texto ao usuário
//scanf, informação do usuário da váriável
//%d, comando de recebimento de informação via teclado
//processamento
    soma = num1 + num2;
    multiplicacao = soma * num1; 
//saída
    printf("O resultado da multiplicação é %d", multiplicacao);
} 
