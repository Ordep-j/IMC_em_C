#include <stdio.h>
#include <stdlib.h>
int main()
{
    float peso, altura, imc;

    #ifdef _WIN32
        system("cls");
    #else
        system("cls");
    #endif

    printf("==========================\n");
    printf("   Calculadora de IMC     \n");
    printf("==========================\n");    

    printf("Digite o seu peso: ");

    if (scanf("%f", &peso) != 1){
        printf("\n[ERRO] Entrada inválida para peso. \n");
        return 1;
    }

    printf("Digite a sua altura ");
    if (scanf("%f", &altura) != 1){
        printf("\n[ERRO] Entrada inválida para altura. \n");
        return 1;
    }

    if (altura <= 0 || peso <= 0){
        printf("\n[ERRO] Peso e altura devem ser maior que zero!\n");
        return 1;
    }

    imc = peso / (altura * altura);

    printf("\n-------------------------------------------\n");

    printf("Seu IMC é: %.2f\n", imc);
    printf("Classificação: ");

    if (imc < 18.5){
        printf("Abaixo do peso\n");
    }
    else if (imc >= 18.5 && imc < 25.0){
        printf("Peso normal\n");
    }
    else if (imc >= 25.0 && imc < 30){
        printf("Sobrepeso\n");
    }
    else {
        printf("Obeso\n");
    }

    printf("--------------------------------------------\n");

    return 0;
}