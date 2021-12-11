#include <stdio.h>
#include <stdlib.h>
int main()
{

    struct Estudante
    {
        char nome[40];
        int idade;
        char endereco[100];
        int cpf;
    };
    struct Estudante aluno, *ponteiro_aluno;
    {
        ponteiro_aluno = &aluno;
        printf("Digite seu nome: ");
        gets(ponteiro_aluno->nome);
        fflush(stdin);
        printf("Digite a idade: ");
        scanf("%d", &ponteiro_aluno->idade);
        fflush(stdin);
        printf("Digite o endereco: ");
        scanf("%s", &ponteiro_aluno->endereco);
        fflush(stdin);
        printf("Digite os tres primeiros numeros do seu CPF: ");
        scanf("%d", &ponteiro_aluno->cpf);
        fflush(stdin);

        printf("\n**********DADOS DO ESTUDANTE************");
        printf("\nALUNO: %s", ponteiro_aluno->nome);
        printf("\nIDADE: %d", ponteiro_aluno->idade);
        printf("\nENDERECO: %s", ponteiro_aluno->endereco);
        printf("\nCPF: %d\n", ponteiro_aluno->cpf);
        system("pause");
        return (0);
    };
}