

#define DIM 5


struct tnodoLLS
{
  char nome[20][20];
  int chave;
};

  struct tnodoLLS lista[DIM];  /*lista*/
  

 
 void mostraLista(struct tnodoLLS *LLS, int *n);
  void insereNodo(struct tnodoLLS *LLS, int *n);
  int buscaLinearLLS(struct tnodoLLS *LLS, int n, char *tmp2);
  void insereAresta(struct tnodoLLS *LLS, int *n);