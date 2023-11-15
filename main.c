#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sgc.h"

void menu() {
    int user1;

    while (1) {
        printf("\n=============BEM-VINDO AO SISTEMA COMERCIAL=============\n\n");
        printf("\n----------Escolha uma ação no Sistema Comercial----------\n\n");

        printf("Qual seu nível de usuário?\n\n");
        printf("1-Comum\n");
        printf("2-Administrador\n");
        printf("3-Sair do Sistema\n");

        scanf("%d", &user1);

        switch (user1) {
            case 1:
                printf(" 1- Realize o pedido de algum produto.\n 2-  Visualizar a lista de produtos disponíveis no estoque.\n 3- Exibir a lista de pedidos feitos pelos usuários\n");
                int escolher1;
                scanf("%d", &escolher1);

                switch (escolher1) {
                    case 1:
                        RealizarPedido();
                        break;
                    case 2:
                        MostrarListaProdutos();
                        break;
                    case 3:
                        MostrarPedidosUsuarios();
                        break;
                    default:
                        break;
                }

                break;

            case 2:
                printf(" 1- Adicionar produtos novos ao estoque.\n 2- Exibir a lista de produtos disponíveis no estoque.\n 3- Adicionar novos usuários ao sistema.\n 4- Excluir usuário do sistema.\n 5- Faca pedidos de produtos.\n 6- Cancele o pedido de produtos.\n 7- Exibir lista de pedidos feitas por usuário.\n");
                int escolher2;
                scanf("%d", &escolher2);
                switch (escolher2) {
                    case 1:
                        AdicaoProduto();
                        break;
                    case 2:
                        MostrarListaProdutos();
                        break;
                    case 3:
                        AdicionarUsuario();
                        break;
                    case 4:
                        ExcluirUsuario();
                        break;
                    case 5:
                        RealizarPedido();
                        break;
                    case 6:
                        ExcluirPC();
                        break;
                    case 7:
                        MostrarPedidosUsuarios();
                        break;
                    default:
                        break;
                }
                break;

            case 3:
                printf("Saída do Sistema.\n");
                exit(0);

            default:
                break;
        }
    }
}

int main() {
    // Inicializa o menu
    menu();

    return 0;
}
