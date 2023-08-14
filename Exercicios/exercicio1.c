#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* NOTAS:
-NAO CONSEGUI USAR PONTEIRO PARA ARMAZENAR O NOME DO USUARIO, OCORRIA UM ERRO NA HORA DE
ARMAZENAR E NA HORA DE COMPARAR COM UMA CONTA EXISTENTE NA FUNCAO 'verContas'.
-Caso possa, refaça esse código com o uso de ponteiro.
*/
typedef struct
{
    int num;
    float saldo;
    char nome[100];

} Conta;

int numContas = 0;
Conta contas[15];
const int MAXCONTAS = sizeof(contas) / sizeof(contas[0]);

void menu()
{
    printf("\nMain Menu:\n");
    printf("*************************************************** \n");
    printf("1. Cadastrar Contas\n");
    printf("*************************************************** \n");
    printf("2. Visualizar todas as contas\n");
    printf("*************************************************** \n");
    printf("3. Excluir conta com menor saldo\n");
    printf("*************************************************** \n");
    printf("4. Sair do programa\n");
    printf("*************************************************** \n");
    printf("Digite o numero correspondente a opcao desejada: \n");
}

void cadastro()
{
    if (numContas >= MAXCONTAS)
    {
        printf("Numero maximo de contas atingido.\n");
        return;
    }

    Conta novaConta;
    printf("Digite o numero da conta(6 digitos): \n");
    scanf("%d", &novaConta.num);
    getchar();

    for (int i = 0; i < numContas; i++)
    {
        if (contas[i].num == novaConta.num)
        {
            printf("Essa conta ja existe.\nPor favor, tente novamente com um numero diferente.\n");
            return cadastro();
        }
    }

    printf("\nDigite o nome da conta: ");
    // scanf("%s", &novaConta.nome);
    fgets(novaConta.nome, 99, stdin);

    printf("\nDigite o saldo da conta: R$");
    scanf("%f", &novaConta.saldo);

    contas[numContas] = novaConta;
    numContas++;

    printf("\nCadastro realizado com sucesso!");
}

void verContas()
{
    char busca[100];
    printf("\nDigite o nome em que a conta foi criada: ");
    fgets(busca, 99, stdin);
    // scanf("%s", busca);

    int x = 0;
    printf("\nContas no nome de %s: ", busca);

    for (int i = 0; i < numContas; i++)
    {
        if (strcmp(contas[i].nome, busca) == 0)
        {

            printf("\nNumero da conta: %d / Nome da conta: '%s' / Saldo: R$%.2f ", contas[i].num, contas[i].nome, contas[i].saldo);
            x = 1;
        }
    }

    if (!x)
    {
        printf("\nNao existe registros de contas no nome de %s.", busca);
    }
}

void excluirConta()
{

    if (numContas == 0)
    {
        printf("Nenhuma conta registrada.\n");
        return;
    }

    int iMenor = 0;
    for (int i = 1; i < numContas; i++)
    {
        if (contas[i].saldo < contas[iMenor].saldo)
        {
            iMenor = i;
        }
    }

    printf(" - Numero:%d\n - Nome:%s\n - Saldo:%.2f\n1 ", contas[iMenor].num, contas[iMenor].nome, contas[iMenor].saldo);
    printf("\nConta [%d] com menor saldo excluida com sucesso.", contas[iMenor].num);

    for (int i = iMenor; i < numContas; i++)
    {
        contas[i] = contas[i + 1];
    }

    numContas--;
}

int main()
{

    int opcoes;

    do
    {
        menu();
        scanf("%d", &opcoes);
        getchar();

        switch (opcoes)
        {
        case 1:
            cadastro();
            break;
        case 2:
            verContas();
            break;
        case 3:
            excluirConta();
            break;
        case 4:
            printf("Encerrando o programa.");
            break;
        default:
            printf("Escolha uma opcao valida!\n");
            break;
        }
    } while (opcoes != 4);

    return 0;
}
