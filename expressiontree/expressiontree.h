#ifndef _EXPRESSIONTREE_H_
#define _EXPRESSIONTREE_H_

typedef char TreeElemType;
struct TreeNode;
typedef TreeNode *PtrToNode;
typedef PtrToNode Tree;

struct TreeNode
{
	TreeElemType data;
	struct TreeNode *left;
	struct TreeNode *right;	
};

struct StackNode ;
typedef StackNode *Node;
typedef Node Stack;
typedef Tree StackElemType;

struct StackNode
{
	StackElemType data;
	StackNode  *next;	
};

Tree CreateExpressionTree(const char *str,int len);//建立表达式树
int IsOperator(char c);//判断是否是操作符
Tree CreateTree(char c);//有单个字符构建树
void PreOrder(Tree t);
void MidOrder(Tree t);
void PostOrder(Tree t);


Stack CreateStack();
void MakeEmpty(Stack s);
int IsEmpty(Stack s);
void Push(StackElemType elem,Stack s);
void Pop(Stack s);
StackElemType Top(Stack s);
StackElemType TopAndPop(Stack s);

#endif
