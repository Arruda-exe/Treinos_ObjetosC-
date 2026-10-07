#include <stdio.h>
int main() 
{
    int idade;
    char nome[50];
    printf("qual o seu nome ");
    scanf("%s",&nome);
    printf("digite sua idade");
    scanf("%d",&idade);
    printf("Seu nome é %s! Sua idade é: %d\n", nome, idade);
    


    return 0;

}
