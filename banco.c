#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SENHA_PADRAO "money"
void limparTela();

// Estrutura para representar uma conta bancária
typedef struct
{
    int numero_conta;
    char nome_titular[50];
    double saldo;
} ContaBancaria;

// Função para criar uma nova conta bancária
ContaBancaria *criarConta()
{
    // Alocar memória para a estrutura da conta
    ContaBancaria *nova_conta = (ContaBancaria *)malloc(sizeof(ContaBancaria));

    // Verificar se a alocação foi bem-sucedida
    if (nova_conta == NULL)
    {
        fprintf(stderr, "Erro ao alocar memória para a conta bancária\n");
        exit(EXIT_FAILURE);
    }

    // Solicitar informações ao usuário
    printf("Digite o número da conta: ");
    scanf("%d", &nova_conta->numero_conta);

    printf("Digite o nome do titular: ");
    scanf("%s", nova_conta->nome_titular);

    printf("Digite o saldo inicial: ");
    scanf("%lf", &nova_conta->saldo);

    // Retornar o ponteiro para a nova conta
    return nova_conta;
}
void limparTela()
{
    system("clear");
}
int main()
{
    char BancoNome[] = "BANCO MASSA DE MAIS VÉI";
    char senhaDigitada[20];
    int opcao;

    do
    {
        limparTela();
        printf("Digite a senha: ");
        scanf("%s", senhaDigitada);

        if (strcmp(senhaDigitada, SENHA_PADRAO) != 0)
        {
            printf("Senha incorreta! Tente novamente.\n");
            printf("Pressione Enter para continuar...");
            getchar();
            getchar();
        }
    } while (strcmp(senhaDigitada, SENHA_PADRAO) != 0);

    while (1)
    {
        limparTela();

        printf("%s\n", BancoNome);
        printf("\n------------ MENU ------------\n");
        printf("1 - Criar nova Conta\n");
        printf("2 - Depositar e sacar dinheiro em uma nova conta\n");
        printf("3 - Mostrar saldo total de cada conta\n");
        printf("4 - Editar informacoes do titular de uma conta\n");
        printf("5 - Remover conta\n");
        printf("6 - Transferir valor de uma conta para outra\n");
        printf("7 - Salvar dados de uma conta em um arquivo\n");
        printf("8 - SAIR\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            // Exibir informações da conta
            ContaBancaria *minha_conta = criarConta();

            printf("Número da Conta: %d\n", minha_conta->numero_conta);
            printf("Titular da Conta: %s\n", minha_conta->nome_titular);
            printf("Saldo: %.2f\n", minha_conta->saldo);

            // Liberar a memória alocada para a conta
            free(minha_conta);
            break;
        case 2:
            printf("2 - COLOQUE SUA FUNCAO\n");
            break;
        case 3:
            printf("3 - COLOQUE SUA FUNCAO\n");
            break;
        case 4:
            printf("4 - COLOQUE SUA FUNCAO\n");
            break;
        case 5:
            printf("5 - COLOQUE SUA FUNCAO\n");
            break;
        case 6:
            printf("6 - COLOQUE SUA FUNCAO\n");
            break;
        case 7:
            printf("7 - COLOQUE SUA FUNCAO\n");
            break;
        case 8:
            printf("Fim da operacao %s\n", BancoNome);
            exit(0);
        default:
            printf("Opcao incorreta. Pressione Enter para continuar...");
            getchar();
            getchar();
            break;
        }
    }

    return 0;
}