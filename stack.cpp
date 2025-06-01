#include <iostream>
#include <stack>
#define MAXSTACK 5
using namespace std;

typedef int tipeitem;

typedef struct{
    tipeitem Item[MAXSTACK];
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

void Pop(Stack *S, tipeitem *x){
    if (S->Count == 0)
        cout<<"Stack kosong bro!"<<endl;
else{
    --(S->Count);
    *x = S->Item[S->Count];
    }
}