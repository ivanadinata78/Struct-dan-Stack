#include <iostream>
#include <stack>
#define MAXSTACK 5
using namespace std;

typedef int ItemType;

typedef struct{
    ItemType Item[MAXSTACK];
    int Count;
}Stack;

void InitializeStack(Stack *S){
    S->Count = 0;
}

int Full(Stack *S){
    return (S->Count == MAXSTACK);
}

int Empty(Stack *S){
    return (S->Count == 0);
}