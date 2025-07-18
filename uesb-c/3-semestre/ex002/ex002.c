#include <stdio.h>
#include <stdlib.h>

//---------------- Struct ----------------//

typedef struct
{
  int numbers[4];
  int length;
  int currentLength;
} List;

//---------------- Add ----------------//

void initList(List *list)
{
  list->length = 4;
  list->currentLength = -1;
}

//---------------- Add ----------------//

void add(List *list, int index, int value)
{
  if (list->currentLength + 1 == list->length)
  {
    printf("[ERRO]: lista cheia.\n");
    return;
  }

  if (index < 0 || index > list->currentLength + 1)
  {
    printf("[ERRO]: indice invalido.\n");
    return;
  }

  if (index <= list->currentLength)
  {
    for (int i = list->currentLength; i >= index; i--)
    {
      list->numbers[i + 1] = list->numbers[i];
    }
  }

  list->numbers[index] = value;
  list->currentLength++;

  for (int i = 0; i <= list->currentLength; i++)
  {
    printf("| %d ", list->numbers[i]);
  }
  printf(" |\n");
}

//---------------- GetIndex ----------------//

int getIndex(List *list, int value)
{
  for (int i = 0; i <= list->currentLength; i++)
  {
    if (value == list->numbers[i])
    {
      return i;
    }
  }

  return -1;
}

//---------------- Main ----------------//

int main()
{
  List *list = malloc(sizeof(List) * 1);
  initList(list);

  int index, value, option;

  do
  {
    printf("+------------------------+");
    printf("\n|   Selecione a opcao:   |");
    printf("\n|   1. Adicionar numero  |");
    printf("\n|   2. Encontrar indice  |");
    printf("\n|   3. Sair              |");
    printf("\n+------------------------+");
    printf("\n>");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      printf("Digite o valor: ");
      scanf("%d", &value);
      printf("Digite o indice: ");
      scanf("%d", &index);
      add(list, index, value);
      break;
    case 2:
      printf("Digite o valor a ser procurado: ");
      scanf("%d", &value);
      index = getIndex(list, value);
      printf("Numero %d na posicao %d\n", value, index);
      break;
    case 3:
      option = 3;
      printf("Fim do programa.\n");
      break;
    default:
      printf("Opcao invalida.\n");
      break;
    }

  } while (option != 3);

  free(list);
  return 0;
}