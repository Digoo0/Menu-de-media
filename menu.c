#include <stdio.h>

int main(){

    float n1, n2, media;
    int opc;

    printf("Menu de Generenciamento de Estudantes.\n");
    printf("1 - Calcular média\n");
    printf("2 - Determinar status\n");
    printf("3 - Sair\n");
    scanf("%d", &opc);

    switch (opc){
    case 1:
        printf("Digite a nota 1: \n");
        scanf("%f", &n1);
        printf("Digite a nota 2: \n");
        scanf("%f", &n2);
        media = ((n1+n2)/2);
        printf("Sua média é: %.2f \n", media);

    break;

    case 2:

        printf("Digite a nota 1: \n");
        scanf("%f", &n1);
        printf("Digite a nota 2: \n");
        scanf("%f", &n2);
        media = ((n1+n2)/2);
    if(media >= 7.0){
        printf("Média: %.2f\n", media);
        printf("Status: Aprovado!\n");
    }
    else if(media >= 5.0 && media < 7.0){
        printf("Média: %.2f\n", media);
        printf("Status: Recuperação!\n");
    }
    else{
        printf("Média: %.2f\n", media);
        printf("Status: Reprovado!\n");
    }

    break;

    case 3:
    printf("Saindo...\n");

    break;
    
    default:
    printf("Erro\n");
        break;
    }




}
