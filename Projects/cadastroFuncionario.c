#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

typedef struct
{
    char nome[100];
    float vendas[3];
    float pontos[3];

} Funcionario;

const int NUMFUNCIO = 15;
Funcionario funcionarios[15];
int num = 0;

void menu()
{
    printf("\nSelecione a opcao que desja visualizar: ");
    printf("\n*********************************************");
    printf("\n1. Cadastro de funcionarios");
    printf("\n*********************************************");
    printf("\n2. Verificar as vendas de cada funcionario");
    printf("\n*********************************************");
    printf("\n3. Total de pontos e vendas");
    printf("\n*********************************************");
    printf("\n4. Sair do programa");
    printf("\n*********************************************");
    printf("\nDigite o numero correspondente a uma das opcoes a cima: ");
    printf("\n");
}

void cadastroFuncionarios()
{
    Funcionario novoFuncionario;

    printf("Digite o nome do funcionario: ");
    fgets(novoFuncionario.nome, 99, stdin);

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o valor total de vendas do funcionario %s\nNo mes[%.0f]: R$", novoFuncionario.nome, i + 1.0);
        scanf("%f", &novoFuncionario.vendas[i]);
        getchar();
        novoFuncionario.pontos[i] = 0.0;
    }

    funcionarios[num] = novoFuncionario;
    num++;

    printf("Funcionario registrado com suesso!");
}

void calcularPontos()
{
    for (int i = 0; i < num; i++)
    {
        float somaVendas = 0.0;
        float somaPontos = 0.0;
        printf("\nPontos do funcionario %s", funcionarios[i].nome);
        for (int j = 0; j < 3; j++)
        {

            funcionarios[i].pontos[j] = funcionarios[i].vendas[j] / 1000 * 1;
            somaVendas += funcionarios[i].vendas[j];
            somaPontos += funcionarios[i].pontos[j];
            printf("\nNo mes[%d]: %.2f", j + 1, funcionarios[i].pontos[j]);
        }
        printf("\nPontos totais do funcionario %s->%.2f", funcionarios[i].nome, somaPontos);
        printf("\nTotal vendido: R$%.2f \n", somaVendas);
    }
}

void maiorPontuacao()
{
    int iMaior = 0;
    float maiorPontuacao = 0.0;

    for (int i = 0; i < NUMFUNCIO; i++)
    {
        float pontosTotais = 0.0;
        for (int j = 0; j < 3; j++)
        {
            pontosTotais += funcionarios[i].pontos[j];
        }

        if (pontosTotais > maiorPontuacao)
        {
            iMaior = i;
            maiorPontuacao = pontosTotais;
        }
    }
    printf("Funcionario com mais pontos:\n");
    printf("Nome do funcionario: %s\n", funcionarios[iMaior].nome);
    printf("Pontuacao: %.0f\n", floor(maiorPontuacao));
}

void verificarVendas()
{

    if (num <= 0)
    {
        printf("\nNenhum funcionario registrado!");
        return;
    }

    char busca[100];
    printf("\nEscreva o nome do funcionario: ");
    fgets(busca, 99, stdin);

    int x = 0;
    for (int i = 0; i < NUMFUNCIO; i++)
    {
        if (strcmp(funcionarios[i].nome, busca) == 0)
        {
            printf("Nome do funcionario: %s\n", funcionarios[i].nome);
            x = 1;
            for (int j = 0; j < 3; j++)
            {
                printf("Vendas no mes[%.0f]: R$%.2f\n", j + 1.0, funcionarios[i].vendas[j]);
            }
        }
    }
    if (!x)
    {
        printf("Esse funcionario nao foi registrado.");
        return verificarVendas();
    }
}

int main()
{
    int verifica;

    do
    {
        menu();
        scanf("%d", &verifica);
        getchar();

        switch (verifica)
        {
        case 1:
            cadastroFuncionarios();
            break;
        case 2:
            verificarVendas();
            break;
        case 3:
            calcularPontos();
            maiorPontuacao();
            break;
        case 4:
            printf("\nPrograma encerrado.");
            break;
        default:
            printf("\nDigite um numero valido!");
            break;
        }
    } while (verifica != 4);

    return 0;
}
