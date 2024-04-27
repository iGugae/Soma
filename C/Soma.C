#include <stdio.h>
int main(void){
    //Variáveis
    int a, b, soma;

    //Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);

    //Cálculo
    soma = a + b;
    
    //Saída de dados
    printf("A soma entre %d + %d é igual a %d", a, b, soma);
}
