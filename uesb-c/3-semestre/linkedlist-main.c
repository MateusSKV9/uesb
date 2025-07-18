#include <stdio.h>
#include <stdlib.h>

void clearPrompt();

/* STRUCTS AND CONSTRUCTORS FOR STRUCTS */
typedef struct Node {
    int value;
    struct Node *next;
} Node;
void contructorNode(Node*, int);

typedef struct {
    int size;
    Node* head;
} LinkedList;
void contructorLinkedList(LinkedList*);

/* AUXILIARY FUNCTIONS  */
void showMenu(int*);
void freeLinkedList(LinkedList*);
void showLinkedList(LinkedList*);
void verifyOptionMenu(LinkedList*, int);

/* INSERT FUNCTIONS */
int insert(LinkedList*, int,  int);
int insertFront(LinkedList*, int);
int insertBack(LinkedList*, int);

int main() {
    
    int opt;

    LinkedList* linkedList = (LinkedList*) malloc(sizeof(LinkedList));
    contructorLinkedList(linkedList);

    do{
        clearPrompt();
        
        if(linkedList->size != 0){
            showLinkedList(linkedList);
        }
        
        showMenu(&opt);
        verifyOptionMenu(linkedList, opt);
    } while (opt != 0);

    freeLinkedList(linkedList);

    return 0;
}

/* CONSTRUCTORS FOR STRUCTS */
void contructorLinkedList(LinkedList* linkedList){
    linkedList->size = 0;
    linkedList->head = NULL;
}

void contructorNode(Node* node, int value){
    node->value = value;
    node->next = NULL;
}

/* AUXILIARY FUNCTIONS  */
void showLinkedList(LinkedList* linkedList){
    Node* node = linkedList->head;
    
    printf("------- LISTA -------\n");
    for (int i = 0; i < linkedList->size; i++) {
        printf("%d ", node->value);
        if(i != linkedList->size-1){
            printf("-> ");
        }
        node = node->next;
    }
    printf("\n---------------------\n");
    return;
}

void showMenu(int* opt){

    printf("\n--------------------------------\n");
    printf("1 - Insert \n");
    printf("2 - Insert Front \n");
    printf("3 - Insert Back \n");
    printf("0 - Sair \n");
    printf("--------------------------------\n\n");

    printf("Escolha uma opcao: ");
    scanf("%d", opt);
}

void verifyOptionMenu(LinkedList* linkedList, int opt) {
    int value, index, result;

    switch (opt) {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &value);
            printf("Digite a posicao: ");
            scanf("%d", &index);

            result = insert(linkedList, index, value);
            printf(result ? "\nPosicao invalida!\n" : "\nOperacao realizada com sucesso!\n");
            break;

        case 2:
            printf("Digite um valor: ");
            scanf("%d", &value);
            insertFront(linkedList, value);
            printf("\nOperacao realizada com sucesso!\n");
            break;

        case 3:
            printf("Digite um valor: ");
            scanf("%d", &value);
            insertBack(linkedList, value);
            printf("\nOperacao realizada com sucesso!\n");
            break;

        case 0:
            printf("\nPrograma encerrado com sucesso!\n\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }
}

void freeLinkedList(LinkedList* linkedList) {
    Node* current = linkedList->head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(linkedList);
}

/* INSERT FUNCTIONS */
int insert(LinkedList* linkedList, int index,  int value){
    if(index < 0 || index > linkedList->size) return 1;

    if(index == 0){
        return insertFront(linkedList, value);
    } else {
        Node* newNode = (Node*) malloc(sizeof(Node));
        contructorNode(newNode, value);

        Node* pont = linkedList->head;

        for(int i = 0; i != index - 1; i++){
            pont = pont->next;
        }

        newNode->next = pont->next;
        pont->next = newNode;
        linkedList->size++;
    }
    return 0;
}

int insertFront(LinkedList* linkedList, int value){
    Node * newNode = (Node*) malloc(sizeof(Node));
    contructorNode(newNode, value);

    newNode->next = linkedList->head;
    linkedList->head = newNode;
    linkedList->size++;
    
    return 0;
}

int insertBack(LinkedList* linkedList, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    contructorNode(newNode, value);
    
    if(linkedList->size == 0){
        linkedList->head = newNode;

    } else {
        Node* pont = linkedList->head;
        
        while (pont->next != NULL) {
            pont = pont->next;
        }

        pont->next = newNode;
    }

    linkedList->size++;
    return 0;
}

void clearPrompt(){
    /*
        Melhor maneira de limpar o prompt, pois,
        nesse codigo possui uma melhor portabilidade.

        Caso nao de certo, utilize:
        printf("\033[H\033[J");  // Sequencia ANSI para limpar a tela
    */
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
