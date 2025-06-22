#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "list.h"

struct _node {
  char key[20];
  int value;
  struct _node* next;
};

struct _list {
  struct _node* start;
};

static struct _node* listSearch(List *l, char* key) {
  struct _node* next = l->start;
  while(next) {
    if (strcmp(key, next->key) == 0) {
      return next;
    }
    next = next->next;
  }
  return NULL;
};

List* createList() {
  List* l = calloc(1, sizeof(List));
  l->start = NULL;
  return l;
}

void listAppend(List* l, char* key, int value) {
  struct _node * node = calloc(1, sizeof(struct _node));
  strcpy(node->key, key);
  node->value = value;
  node->next = l->start;
  l->start = node;
}

int listGet(List* l, char* key) {
  struct _node*x;
  if((x = listSearch(l, key)) != NULL) {
    return x->value;
  }
  return -1;
}

void listSet(List* l, char* key, int value) {
  struct _node*x;
  if((x = listSearch(l, key)) != NULL){
    x->value = value;
  }
}

int listExist(List* l, char* key) {
  return listSearch(l, key) != NULL;
}


void listPrint(List* l) {
  struct _node* next = l->start;
  if(next) {
    printf("------Current List------\n");
    while(next){
    printf("\t%s = %d\n", next->key, next->value);
    next = next->next;
    }
  }
  printf("-------------------------\n");
}