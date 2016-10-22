#ifndef _STACK_H_
#define _STACK_H_

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

Stack CreateStack();
int IsEmpty(Stack s);
void MakeEmpty(Stack s);
void DisposeStack(Stack s);
void Push(int value,Stack s);
void Pop(Stack);
int Top(Stack s);


#endif
