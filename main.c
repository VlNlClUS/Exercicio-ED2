#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"


int main()
{
  int x = 0, opcao;
  int n = 0;
  int y = 0;

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