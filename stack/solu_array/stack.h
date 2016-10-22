#ifndef _STACK_H_
#define _STACK_H_

struct StackRecord;
typedef struct StackRecord *Stack;

const int MinStackSize = 30;

int IsEmpty(Stack s);
int IsFull(Stack s);
Stack CreateStack(int maxsize);
void DisposeStack(Stack s);
void MakeEmpty(Stack s);
void Push(int value,Stack s);
void Pop(Stack s);
int Top(Stack s);
int TopAndPop(Stack s);

#endif
