#include<stdio.h>

#define LIMITE_PASTEIS 3
#define SALDO_INICIAL 27
#define PRECO_CARNE 8
#define PRECO_QUEIJO 8
#define PRECO_PRESUNTO_QUEIJO 9

int main() {
    int saldo = SALDO_INICIAL;
    int total_pasteis = 0;
    int opcao;
    
    printf("Bem-vindo ao sistema de compra de pastéis!\n");
    printf("Você possui 27 reais para gastar.\n");

    while (saldo > 0 && total_pasteis < LIMITE_PASTEIS) {
        printf("\nSelecione o tipo de pastel que deseja comprar:\n");
        printf("1. Pastel de carne (R$8)\n");
        printf("2. Pastel de queijo (R$8)\n");
        printf("3. Pastel de presunto e queijo (R$9)\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (saldo >= PRECO_CARNE) {
                    saldo -= PRECO_CARNE;
                    total_pasteis++;
                    printf("Pastel de carne comprado!\n");
                } else {
                    printf("Você não tem saldo suficiente para comprar o pastel de carne.\n");
                }
                break;
            case 2:
                if (saldo >= PRECO_QUEIJO) {
                    saldo -= PRECO_QUEIJO;
                    total_pasteis++;
                    printf("Pastel de queijo comprado!\n");
                } else {
                    printf("Você não tem saldo suficiente para comprar o pastel de queijo.\n");
                }
                break;
            case 3:
                if (saldo >= PRECO_PRESUNTO_QUEIJO) {
                    saldo -= PRECO_PRESUNTO_QUEIJO;
                    total_pasteis++;
                    printf("Pastel de presunto e queijo comprado!\n");
                } else {
                    printf("Você não tem saldo suficiente para comprar o pastel de presunto e queijo.\n");
                }
                break;
            case 0:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    printf("Você comprou %d pastel(s) e sobrou %d reais de saldo.\n", total_pasteis, saldo);

    return 0;
}
