

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 5

struct tnodoLLS
{
  char nome[20][20];
  int chave;
};
/*mostra lista*/
void mostraLista(struct tnodoLLS *LLS, int *n)
{
  int i = 0, j = 0;
  int tmp = 0;
  int tmp2 = 0;
  if (*n == 0)
  {
    printf("Lista vazia!\n");
    tmp2 = *n + 1;
  }

  for (j = tmp2; j < *n; j++)
  {
    i = 0;
    printf("\nLISTA %d = ", j);

    printf("%s", LLS[j].nome[0]);
    i++;
    while (i < LLS[j].chave)
    {

      printf(" --> ");

      printf("%s", LLS[j].nome[i]);
      tmp = 1;
      i++;
    }

    printf(" --> 'NULL'");
  }
  j = 0;
}

/*funcao para inserir dado na lista*/
void insereNodo(struct tnodoLLS *LLS, int *n)
{
  getchar();
  if (*n < DIM)
  {

    printf("Digite nome: ");
    scanf("%s", LLS[*n].nome[0]);
    LLS[*n].chave = 1;
    *n = *n + 1;
  }
  else
  {
    printf("Lista cheia, limite atingido!\n");
    getchar();
    getchar();
  }
}

//retorna a posição do elemento na LLS
int buscaLinearLLS(struct tnodoLLS *LLS, int n, char *tmp2)
{
  int i, j;
  for (i = 0; i < 10; i++)
  {

    if (strcmp(LLS[i].nome[0], tmp2) == 0)
    {

      return 1;
    }
    for (j = 1; j < n; j++)
    {

      if (strcmp(LLS[i].nome[j], tmp2) == 0)
      {

        return 1;
      }
    }
  }

  return 0;
}
void insereAresta(struct tnodoLLS *LLS, int *n)
{
  getchar();
  int tmp = 0, j, ch;
  char tmp2[20];
  char tmp3[20];
  int i = *n;
  if (*n < DIM)
  {

    printf("Digite nome do item que ira ser mandado para lista: ");

    scanf("%s", tmp2);

    tmp = buscaLinearLLS(LLS, i, tmp2);
  }

  //realiza a busca do nome nas listas

  if (tmp == 1)
  {
    tmp = 0;
    printf("Digite nome do item que representa a lista a receber: ");

    scanf("%s", tmp3);

    for (j = 0; j < *n; j++)
    {
      if (strcmp(LLS[j].nome[0], tmp3) == 0 && strcmp(tmp2, tmp3) != 0)
      {

        tmp = 1;
        strcpy(LLS[j].nome[LLS[j].chave], tmp2);
       
        LLS[j].chave = LLS[j].chave + 1;
       
      
        j = *n + 1;

        printf("CONGRATULAITIONS");
      }
    }

    getchar();
    getchar();
  }
  if (tmp == 0)
  {
    printf("ITEM NAO ENCONTRADO NA LISTA OU INVALIDO");
    getchar();
    getchar();
  }
}

int main()
{
  int x = 0, opcao;

  int n = 0;
  int y = 0;
  struct tnodoLLS lista[DIM];  /*lista*/
  struct tnodoLLS aresta[DIM]; /*aresta*/
  do
  {
    system("clear");

    printf("\nEntre com sua opcao:\n");
    printf("1 - Mostrar a lista\n");
    printf("2 - Inserir nome na lista\n");
    printf("3 - Criar aresta a partir da lista\n");
    printf("4 - Sair\n");
    scanf("%i", &opcao);
    switch (opcao)
    {
    case 1:
      mostraLista(lista, &n);
      getchar();
      getchar();
      break;
    case 2:
      insereNodo(lista, &n);
      break;
    case 3:

      insereAresta(lista, &n);
      break;

    case 4:
      exit(0);
      break;
    }
  } while (x == 0);
  return 0;
}
