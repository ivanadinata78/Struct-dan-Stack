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
    cout<<"Nilai POP " << *x << " Di tambahkan" <<endl;
    }
}

void Push(tipeitem x, Stack *S)
{
    if (S->Count==MAXSTACK)
        cout << "Stack Hibak! Data kada kawa masuk!"<<endl;
    else{
        S->Item[S->Count]=x;
        cout<<"Nilai PUSH " << x << " Di tambahkan" <<endl;
        ++(S->Count);

    }
}

int main() {
    Stack myStack;
    tipeitem temp;
    InitializeStack(&myStack);

    Push(10, &myStack);
    Push(20, &myStack);
    Push(30, &myStack);
    Push(40, &myStack);
    Push(50, &myStack);

    Pop(&myStack, &temp);
    Pop(&myStack, &temp);
    Pop(&myStack, &temp);
    Pop(&myStack, &temp);
    Pop(&myStack, &temp);

    return 0;
}