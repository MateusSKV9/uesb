#include <stdio.h>
#include <stdlib.h>

int CAP = 4;

typedef struct
{
  int *data;
  int size;
} List;

void construct(List *l, int cap)
{
  l->data = (int *)malloc(sizeof(int) * cap);
  l->size = 0;
}

void printLista(List *list)
{
  printf("\n---------------------------------------\n-");
  for (int i = 0; i < CAP; i++)
  {
    if (i < list->size)
      printf("%d-", list->data[i]);
    else
      printf("#-");
  }
  printf("\n---------------------------------------\n");
}

int add(int val, int index, List *l)
{
  if (l->size == CAP)
  {
    CAP *= 2;
    int *newData = (int *)malloc(sizeof(int) * CAP);

    for (int i = 0; i < l->size; i++)
    {
      newData[i] = l->data[i];
    }

    free(l->data);
    l->data = newData;
  }
  if (index < 0 || index > l->size)
    return 2; // indice invalido

  for (int i = l->size; i > index; i--)
  {
    l->data[i] = l->data[i - 1];
  }

  l->data[index] = val;
  l->size++;

  return 0;
}

int get(int val, List *l)
{
  for (int i = 0; i < l->size; i++)
  {
    if (l->data[i] == val)
      return i;
  }
  return -1; // valor nao encontrado
}

int removeByIndex(int index, List *l)
{
  if (l->size < 1)
    return 1; // lista vazia
  if (index < 0 || index > l->size - 1)
    return 2; // indice invalido

  for (int i = index; i < l->size - 1; i++)
  {
    l->data[i] = l->data[i + 1];
  }

  l->size--;

  return 0;
}

int removeByValue(int val, List *l)
{
  if (l->size < 1)
    return 1; // lista vazia

  int index = get(val, l);
  if (index == -1)
    return 2; // valor nao encontrado na lista

  for (int i = index; i < l->size - 1; i++)
  {
    l->data[i] = l->data[i + 1];
  }

  l->size--;

  return 0;
}

int invert(List *l)
{
  if (l->size < 2)
    return 1; // lista muito curta
  for (int i = 0; i < l->size / 2; i++)
  {
    int aux = l->data[i];
    l->data[i] = l->data[l->size - 1 - i];
    l->data[l->size - 1 - i] = aux;
  }
  return 0;
}

int main()
{

  List *list;
  construct(list, CAP);
  int opt = 0;

  do
  {
    printLista(list);
    printf("Escolha uma opcao:\n");
    printf("Opt 1 - sair\n");
    printf("Opt 2 - adicionar\n");
    printf("Opt 3 - buscar\n");
    printf("Opt 4 - remover por indice\n");
    printf("Opt 5 - remover por valor\n");
    printf("Opt 6 - inverter\n");
    scanf("%d", &opt);

    if (opt == 2)
    {
      printf("\nDigite o valor: ");
      int val;
      scanf("%d", &val);

      printf("\nDigite o indice: ");
      int index;
      scanf("%d", &index);

      int result = add(val, index, list);

      if (result == 0)
        printf("\nValor inserido com sucesso!\n");
      else if (result == 1)
        printf("\nLista cheia!\n");
      else if (result == 2)
        printf("\nIndice invalido!\n");
    }
    else if (opt == 3)
    {
      printf("\nDigite o valor: ");
      int val;
      scanf("%d", &val);

      int result = get(val, list);

      if (result == -1)
        printf("\nValor nao encotrado na lista\n");
      else
        printf("\nValor encontrado na posicao: %d\n", result);
    }
    else if (opt == 4)
    {
      printf("\nDigite o indice: ");
      int index;
      scanf("%d", &index);

      int result = removeByIndex(index, list);

      if (result == 0)
        printf("\nValor removido com sucesso!\n");
      else if (result == 1)
        printf("\nLista vazia!\n");
      else if (result == 2)
        printf("\nIndice invalido!\n");
    }
    else if (opt == 5)
    {
      printf("\nDigite o valor: ");
      int val;
      scanf("%d", &val);

      int result = removeByValue(val, list);

      if (result == 0)
        printf("\nValor removido com sucesso!\n");
      else if (result == 1)
        printf("\nLista vazia!\n");
      else if (result == 2)
        printf("\nValor nao encontrado na lista!\n");
    }
    else if (opt == 6)
    {
      int result = invert(list);
      if (result == 0)
        printf("\nLista invertida com sucesso!\n");
      else if (result == 1)
        printf("\nLista muito curta!\n");
    }

  } while (opt != 1);

  return 0;
}