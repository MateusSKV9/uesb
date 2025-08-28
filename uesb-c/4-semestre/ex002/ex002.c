#include <stdio.h>
#include <stdlib.h>

// STRUCT DO NODO
typedef struct {
  int data;
  struct Node *left_node;
  struct Node *right_node;
} Node;

// STRUCT DA RAIZ
typedef struct Tree {
  Node *root_node;
} Tree;

// CONSTRUTOR DO NODO
Node *constructorNode(int data) {
  Node *node = (Node *)malloc(sizeof(Node));
  node->data;
  node->left_node = NULL;
  node->right_node = NULL;

  return node;
}

// CONSTRUTOR DA RAIZ
Node *construtorTree() {
  Node *root_node = NULL;
  return root_node;
}

// INSERÇÃO
Node *insert(Tree *tree, int data) {
  if (tree->root_node == NULL) {
    tree->root_node = constructorNode(data);
    return tree->root_node;
  } else {
    Node *n = tree->root_node;
    Node *p = NULL;

    while (1) {
      p = n;

      if (data <= p->data) {
        n = n->left_node;

        if (n == NULL) {
          p->left_node = constructorNode(data);
          return tree->root_node;
        }
      } else {
        n = n->right_node;

        if (n == NULL) {
          p->right_node = constructorNode(data);
          return tree->root_node;
        }
      }
    }
  }
}

// PESQUISA
Node *search(Tree *tree, int data) {
  Node *n = tree->root_node;

  while (n != NULL) {
    if (data == n->data) {
      return n;
    } else if (data < n->data) {
      n = n->left_node;
    } else {
      n = n->right_node;
    }
  }

  return NULL;
}

// MAIN
int main() {
  Tree *tree = construtorTree();

  return 0;
}
