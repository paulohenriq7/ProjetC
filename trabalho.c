#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void atualizar_cadastro(int cor[], int codigo[], float tamanho[], float valor[], int x){
int posicao, op;

printf("Você deseja atualizar algum item?\n");
printf("1-Sim\n");
printf("2-Não\n");
scanf("%i", &op);

if (op==1)
{
    printf("Qual item você deseja alterar?\n");
    printf("1- Cor\n");
    printf("2- Tamanho\n");
    printf("3- Código\n");
    printf("4- Valor\n");
    printf("5- tudo\n");
    scanf("%i", &op);

    if (op==1)
{
    printf("Informe a posição da cor (1 a %i) que deseja alterar: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {
         printf("Digite a nova cor do item %d: ", posicao);
         scanf("%d", &cor[posicao - 1]);}

     printf("---CADASTROS ATUALIZADOS---\n");
    for (int i = 0; i < x; i++)
    {
        if (cor[i]==1)
        {
            printf("Cor %d: Verde\n", i + 1);
        }
        else if (cor[i]==2)
        {
            printf("Cor %d: Marfim\n", i + 1);
        }
         else if (cor[i]==3)
        {
            printf("Cor %d: Azul\n", i + 1);
        }
         else if (cor[i]==4)
        {
            printf("Cor %d: Camurça\n", i + 1);
        }
         else if (cor[i]==5)
        {
            printf("Cor %d: Areia\n", i + 1);
        }
        else
        {
            printf("Sem tintas disponíveis.\n");
        }
    }
    }

    else if (op == 2)
    {
    printf("Informe a posição do tamanho (1 a %i) que deseja alterar: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {
         printf("Digite o novo tamanho do item %d: ", posicao);
         scanf("%f", &tamanho[posicao - 1]);
}
    printf("---CADASTROS ATUALIZADOS---\n");
    for (int i = 0; i < x; i++)
    {
        printf("Tamanho %d: %.2f \n", i + 1, tamanho[i]);
    }
    }

        else if (op == 3)
    {
    printf("Informe a posição do código (1 a %i) que deseja alterar: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {
         printf("Digite o novo código do item %d: ", posicao);
         scanf("%i", &codigo[posicao - 1]);
         }
     printf("---CADASTROS ATUALIZADOS---\n");
    for ( int i = 0; i < x; i++)
    {
        printf("Código %d: %i \n", i + 1, codigo[i]);
    }
    }

        else if (op == 4)
    {
    printf("Informe a posição do valor (1 a %i) que deseja alterar: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {
         printf("Digite o novo valor do item %d: ", posicao);
         scanf("%f", &valor[posicao - 1]);
}
 printf("---CADASTROS ATUALIZADOS---\n");
    for (int i = 0; i < x; i++)
    {
        printf("Valor %d: %.2f \n", i + 1, valor[i]);
    }
    }

        else if (op == 5)
    {
    printf("Informe a posição da cor (1 a %i) que deseja alterar: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {
         printf("Digite a nova cor do item %d: ", posicao);
         scanf("%d", &cor[posicao - 1]);
}
    printf("Informe a posição do tamanho (1 a %i) que deseja alterar: ", x);
    scanf("%i", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {
         printf("Digite o novo tamanho do item %d: ", posicao);
         scanf("%f", &tamanho[posicao - 1]);
}
    printf("Informe a posição do código (1 a %i) que deseja alterar: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {
         printf("Digite o novo codigo do item %d: ", posicao);
         scanf("%d", &codigo[posicao - 1]);
}

    printf("Informe a posição do valor (1 a %i) que deseja alterar: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {
         printf("Digite o novo valor do item %d: ", posicao);
         scanf("%f", &valor[posicao - 1]);
}
     printf("---CADASTROS ATUALIZADOS---\n");
    for (int i = 0; i < x; i++)
    {
        if (cor[i]==1)
        {
            printf("Cor %d: Verde\n", i + 1);
        }
        else if (cor[i]==2)
        {
            printf("Cor %d: Marfim\n", i + 1);
        }
         else if (cor[i]==3)
        {
            printf("Cor %d: Azul\n", i + 1);
        }
         else if (cor[i]==4)
        {
            printf("Cor %d: Camurça\n", i + 1);
        }
         else if (cor[i]==5)
        {
            printf("Cor %d: Areia\n", i + 1);
        }
        else
        {
            printf("Sem tintas disponíveis.\n");
        }
    }
    for (int i = 0; i < x; i++)
    {
        printf("Tamanho %d: %.2f \n", i + 1, tamanho[i]);
    }
     for (int i = 0; i < x; i++)
    {
        printf("Código %d: %i \n", i + 1, codigo[i]);
    }
    for (int i = 0; i < x; i++)
    {
        printf("Valor %d: %.2f \n", i + 1, valor[i]);
    }
    }
}

else
{
    printf("Próximo menu\n");
}

}

void remover_cadastro(int cor[], int codigo[], float tamanho[], float valor[], int x) {
    
    int op, posicao;
    printf("Você deseja remover algum item?\n");
    printf("1-Sim\n");
    printf("2-Não\n");
    scanf("%i", &op);

    if (op==1)
{
    printf("Qual item você deseja remover?\n");
    printf("1- Cor\n");
    printf("2- Tamanho\n");
    printf("3- Código\n");
    printf("4- Valor\n");
    printf("5- tudo\n");
    scanf("%i", &op);

    if (op==1)
{
    printf("Informe a posição da cor (1 a %i) que deseja remover: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {

        posicao--;
    if (posicao < 0 || posicao >= x) {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = posicao; i < x - 1; i++) {
        cor[i] = cor[i + 1];
    }
    x--;
         }

     printf("---CADASTRO REMOVIDO COM SUCESSO---\n");

    }

    else if (op == 2)
    {
    printf("Informe a posição do tamanho (1 a %i) que deseja remover: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {

        posicao--;
    if (posicao < 0 || posicao >= x) {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = posicao; i < x - 1; i++) {
        tamanho[i] = tamanho[i + 1];
    }
    x--;
         }
    printf("---CADASTRO REMOVIDO COM SUCESSO---\n");
    }

        else if (op == 3)
    {
    printf("Informe a posição do código (1 a %i) que deseja remover: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {

        posicao--;
    if (posicao < 0 || posicao >= x) {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = posicao; i < x - 1; i++) {
        codigo[i] = codigo[i + 1];
    }
    x--;
         }
     printf("---CADASTRO REMOVIDO COM SUCESSO---\n");
    }

        else if (op == 4)
    {
    printf("Informe a posição do valor (1 a %i) que deseja remover: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
 else {

        posicao--;
    if (posicao < 0 || posicao >= x) {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = posicao; i < x - 1; i++) {
        valor[i] = valor[i + 1];
    }
    x--;
         }
 printf("---CADASTRO REMOVIDO COM SUCESSO---\n");

    }

        else if (op == 5)
    {
    printf("Informe a posição da cor (1 a %i) que deseja remover: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
         else {

        posicao--;
    if (posicao < 0 || posicao >= x) {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = posicao; i < x - 1; i++) {
        cor[i] = cor[i + 1];
    }
    x--;
         }
         x++;
    printf("Informe a posição do tamanho (1 a %i) que deseja remover: ", x);
    scanf("%i", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {

        posicao--;
    if (posicao < 0 || posicao >= x) {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = posicao; i < x - 1; i++) {
        tamanho[i] = tamanho[i + 1];
    }
    x--;
         }
         x++;
    printf("Informe a posição do código (1 a %i) que deseja remover: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
         else {

        posicao--;
    if (posicao < 0 || posicao >= x) {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = posicao; i < x - 1; i++) {
        codigo[i] = codigo[i + 1];
    }
    x--;
         }
x++;
    printf("Informe a posição do valor (1 a %i) que deseja remover: ", x);
    scanf("%d", &posicao);

        if (posicao < 1 || posicao > x) {
        printf("Sem posição cadastrada.\n");
}
        else {

        posicao--;
    if (posicao < 0 || posicao >= x) {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = posicao; i < x - 1; i++) {
        valor[i] = valor[i + 1];
    }
    x--;
         }
     printf("---CADASTROS REMOVIDOS COM SUCESSO---\n");
    }
}

else
{
    printf("Próximo menu\n");
}
}

void verificadora(int cor[], int codigo[], float tamanho[], float valor[], int x) {
    int op;
    //arquivo
    FILE *arquivo; 

    printf("Você deseja verificar os cadastros após serem removidos?\n");
    printf("1-Sim\n");
    printf("2-Não\n");
    scanf("%i", &op);

    if (op == 1) {
        arquivo = fopen("cadastros.txt", "w");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return;
        }

        x--;
        for (int i = 0; i < x; i++) {
            if (cor[i] == 1) {
                printf("Cor %d: Verde\n", i + 1);
                fprintf(arquivo, "Cor %d: Verde\n", i + 1); 
            } else if (cor[i] == 2) {
                printf("Cor %d: Marfim\n", i + 1);
                fprintf(arquivo, "Cor %d: Marfim\n", i + 1); 
            } else if (cor[i] == 3) {
                printf("Cor %d: Azul\n", i + 1);
                fprintf(arquivo, "Cor %d: Azul\n", i + 1); 
            } else if (cor[i] == 4) {
                printf("Cor %d: Camurça\n", i + 1);
                fprintf(arquivo, "Cor %d: Camurça\n", i + 1); 
            } else if (cor[i] == 5) {
                printf("Cor %d: Areia\n", i + 1);
                fprintf(arquivo, "Cor %d: Areia\n", i + 1);
            } else {
                printf("Sem tintas disponíveis.\n");
                fprintf(arquivo, "Sem tintas disponíveis.\n"); 
            }
        }

        x++;
        x--;
        for (int i = 0; i < x; i++) {
            printf("Tamanho %d: %.2f \n", i + 1, tamanho[i]);
            fprintf(arquivo, "Tamanho %d: %.2f \n", i + 1, tamanho[i]);
        }

        x++;
        x--;
        for (int i = 0; i < x; i++) {
            printf("Código %d: %i \n", i + 1, codigo[i]);
            fprintf(arquivo, "Código %d: %i \n", i + 1, codigo[i]);
        }

        x++;
        x--;
        for (int i = 0; i < x; i++) {
            printf("Valor %d: %.2f \n", i + 1, valor[i]);
            fprintf(arquivo, "Valor %d: %.2f \n", i + 1, valor[i]);
        }

        // Fecha o arquivo após escrever os dados
        fclose(arquivo);
        printf("Os dados foram salvos em 'cadastros.txt'.\n");
    } else {
        printf("Programa encerrado.\n");
    }
}


//função principal
int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

FILE *arquivo; 

    int op, x, i;

printf("---CADASTRO DE ITENS---\n");
printf("Quantas latas de tinta você deseja cadastrar?\n");
scanf("%i", &x);
printf("O que você deseja cadastrar?\n");
printf("1- Cor\n");
printf("2- Tamanho\n");
printf("3- Código\n");
printf("4- Valor\n");
printf("5- tudo\n");
scanf("%i", &op);

int cor[x], codigo[x];
float tamanho[x], valor[x];

      arquivo = fopen("principal.txt", "w");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return;
        }

if (op==1)
{
    for ( i = 0; i < x; i++)
    {
        printf("Qual a cor da lata %i?\n", i+1);
        printf("1- Verde\n");
        printf("2- Marfin\n");
        printf("3- Azul\n");
        printf("4- Camurça\n");
        printf("5- Areia\n");
        scanf("%i", &cor[i]);
    }
     printf("---CADASTROS REALIZADOS---\n");
    for ( i = 0; i < x; i++)
    {
        if (cor[i]==1)
        {
            printf("Cor %d: Verde\n", i + 1);
            fprintf(arquivo, "Cor %d: Verde\n", i + 1); 
        }
        else if (cor[i]==2)
        {
            printf("Cor %d: Marfim\n", i + 1);
            fprintf(arquivo, "Cor %d: Marfim\n", i + 1);
        }
         else if (cor[i]==3)
        {
            printf("Cor %d: Azul\n", i + 1);
            fprintf(arquivo, "Cor %d: Azul\n", i + 1);
        }
         else if (cor[i]==4)
        {
            printf("Cor %d: Camurça\n", i + 1);
            fprintf(arquivo, "Cor %d: Camurça\n", i + 1);
        }
         else if (cor[i]==5)
        {
            printf("Cor %d: Areia\n", i + 1);
            fprintf(arquivo, "Cor %d: Areia\n", i + 1);
        }
        else
        {
            printf("Sem tintas disponíveis.\n");
            fprintf(arquivo, "Sem tintas disponíveis.\n"); 
        }
    }
}
else if (op==2)
{
    for ( i = 0; i < x; i++)
    {
        printf("Qual o tamanho da lata %i, em litros?\n", i+1);
        scanf("%f", &tamanho[i]);
    }
    printf("---CADASTROS REALIZADOS---\n");
    for ( i = 0; i < x; i++)
    {
        printf("Tamanho %d: %.2f \n", i + 1, tamanho[i]);
        fprintf(arquivo, "Tamanho %d: %.2f \n", i + 1, tamanho[i]);
    }
}
else if (op==3)
{
    for ( i = 0; i < x; i++)
    {
        printf("Qual o código da lata %i?\n", i+1);
        scanf("%i", &codigo[i]);
    }
     printf("---CADASTROS REALIZADOS---\n");
    for ( i = 0; i < x; i++)
    {
        printf("Código %d: %i \n", i + 1, codigo[i]);
        fprintf(arquivo, "Código %d: %i \n", i + 1, codigo[i]);
    }
}
else if (op==4)
{
    for ( i = 0; i < x; i++)
    {
        printf("Qual o valor da lata %i?\n", i+1);
        scanf("%f", &valor[i]);
    }
 printf("---CADASTROS REALIZADOS---\n");
    for ( i = 0; i < x; i++)
    {
        printf("Valor %d: %.2f \n", i + 1, valor[i]);
        fprintf(arquivo, "Valor %d: %.2f \n", i + 1, valor[i]);
    }

}
else if (op==5)
{
     for ( i = 0; i < x; i++)
    {
        printf("Qual a cor da lata %i?\n", i+1);
        printf("1- Verde\n");
        printf("2- Marfin\n");
        printf("3- Azul\n");
        printf("4- Camurça\n");
        printf("5- Areia\n");
        scanf("%i", &cor[i]);
    }
      for ( i = 0; i < x; i++)
    {
        printf("Qual o tamanho da lata %i?\n", i+1);
        scanf("%f", &tamanho[i]);
    }
    for ( i = 0; i < x; i++)
    {
        printf("Qual o código da lata %i?\n", i+1);
        scanf("%i", &codigo[i]);
    }
     for ( i = 0; i < x; i++)
    {
        printf("Qual o valor da lata %i?\n", i+1);
        scanf("%f", &valor[i]);
    }
     printf("---CADASTROS REALIZADOS---\n");
    for ( i = 0; i < x; i++)
    {
        if (cor[i]==1)
        {
            printf("Cor %d: Verde\n", i + 1);
            fprintf(arquivo, "Cor %d: Verde\n", i + 1);
        }
        else if (cor[i]==2)
        {
            printf("Cor %d: Marfim\n", i + 1);
            fprintf(arquivo, "Cor %d: Marfim\n", i + 1);
        }
         else if (cor[i]==3)
        {
            printf("Cor %d: Azul\n", i + 1);
            fprintf(arquivo, "Cor %d: Azul\n", i + 1);
        }
         else if (cor[i]==4)
        {
            printf("Cor %d: Camurça\n", i + 1);
            fprintf(arquivo, "Cor %d: Camurça\n", i + 1);
        }
         else if (cor[i]==5)
        {
            printf("Cor %d: Areia\n", i + 1);
            fprintf(arquivo, "Cor %d: Areia\n", i + 1);
        }
        else
        {
            printf("Sem tintas disponíveis.\n");
            fprintf(arquivo, "Sem tintas disponíveis.\n"); 
        }
    }
    for ( i = 0; i < x; i++)
    {
        printf("Tamanho %d: %.2f \n", i + 1, tamanho[i]);
        fprintf(arquivo, "Tamanho %d: %.2f \n", i + 1, tamanho[i]);
    }
     for ( i = 0; i < x; i++)
    {
        printf("Código %d: %i \n", i + 1, codigo[i]);
        fprintf(arquivo, "Código %d: %i \n", i + 1, codigo[i]);
    }
    for ( i = 0; i < x; i++)
    {
        printf("Valor %d: %.2f \n", i + 1, valor[i]);
        fprintf(arquivo, "Valor %d: %.2f \n", i + 1, valor[i]);
    }
}
else
{
    printf("Escolha inválida");
}

atualizar_cadastro(cor, codigo, tamanho, valor, x);
remover_cadastro(cor, codigo, tamanho, valor, x);
verificadora(cor, codigo, tamanho, valor, x);

}