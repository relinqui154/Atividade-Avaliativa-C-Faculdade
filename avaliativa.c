#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    float agua = 2, agua_do_poco = 1, agua_gas = 4, agua_benta = 999999, agua_sabor = 6, agua_coco = 8, somatoria;
    int escolha, div;
    bool verifica = false, verifica2 = false;

    printf("Bem vindo a venda de agua!!!\n");
    while (verifica == false) {
            printf("Digite uma opcao: \n1) Iniciar Venda \n2) Sair \n");
            scanf("%d", &escolha);

            if (escolha == 1) {
                    while (verifica2 == false) {
                        printf("Escolha uma opcao: \n");
                        printf("1) Agua: R$ 2,00 \n");
                        printf("2) Agua de Poco: R$ 1,00 \n");
                        printf("3) Agua de Gas: R$ 4,00 \n");
                        printf("4) Agua Benta: R$ 999999,00 \n");
                        printf("5) Agua Saborizada: R$ 6,00 \n");
                        printf("6) Agua de Coco: R$ 8,00 \n");
                        printf("7) Sair\n");
                        escolha = 0;
                        scanf("%d", &escolha);

                        if (escolha == 1) {
                                somatoria += agua;
                        } else if (escolha == 2) {
                                somatoria += agua_do_poco;
                        } else if (escolha == 3) {
                                somatoria += agua_gas;
                        } else if (escolha == 4) {
                                somatoria += agua_benta;
                        } else if (escolha == 5) {
                                somatoria += agua_sabor;
                        } else if (escolha == 6) {
                                somatoria += agua_coco;
                        } else if (escolha == 7) {
                                printf("Gostaria de finalizar a compra? \n");
                                printf("1) Sim \n");
                                printf("2) Nao \n");
                                escolha = 0;
                                scanf("%d", &escolha);
                                if (escolha == 1) {
                                        verifica2 = true;
                                } else if (escolha == 2) {
                                        printf("Continuando compras...");
                                }
                        }
                    }

                    printf("Total a se pagar: R$%.2f \n", somatoria);
                    printf("Escolha a forma de pagamento: \n");
                    printf("1) Dinheiro ou Pix \n");
                    printf("2) A vista no cartao de credito \n");
                    printf("3) Parcelar em 2 vezes \n");
                    printf("4) Parcelar em 3 vezes ou mais \n");
                    escolha = 0;
                    scanf("%d", &escolha);

                    if (escolha == 1) {
                            float desconto = somatoria * 0.15;
                            somatoria = somatoria - desconto;
                            printf("Total com o pagamento em Dinheiro/Pix: R$%.2f", somatoria);
                            verifica = true;
                    } else if (escolha == 2) {
                            float desconto = somatoria * 0.10;
                            somatoria = somatoria - desconto;
                            printf("Total com o pagamento a vista/cartao de credito: R$%.2f", somatoria);
                            verifica = true;
                    } else if (escolha == 3) {
                            somatoria = somatoria / 2;
                            printf("Total com o pagamento em 2 vezes sem juros: R$%.2f", somatoria);
                            verifica = true;
                    } else if (escolha == 4) {
                        while (verifica == false) {
                                printf("Quantas vezes você vai parcelar? (3 ou mais) \n");
                                scanf("%d", &div);
                                if (div < 3) {
                                        printf("A parcela para esta opção deve ser maior que 3 meses!\n");
                                } else {
                                        float juros = somatoria * 0.10;
                                        somatoria = somatoria + juros;
                                        printf("Foi parcelado em %d vezes de R$%.2f \n", div, somatoria);
                                        verifica = true;
                                }
                        }
                    } else {
                            printf("Digite um valor valido! \n");
                    }
                    

            } else if (escolha == 2) {
                printf("Saindo da aplicação, hidrate-se!");
                    verifica = true;
            } else {
                    printf("Digite um valor valido!! \n");
            }
    }
    printf("Volte sempre!");

    return 0;
}
