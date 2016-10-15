#ifndef _DOUBLELIST_H_
#define _DOUBLELIST_H_

struct DoubleLinkListNode;
typedef DoubleLinkListNode Node;
typedef struct DoubleLinkListNode *PtrToNode;
typedef PtrToNode DoubleList;
typedef PtrToNode Position;

DoubleList initDoubleList();//初始化一个空的双向链表
DoubleList  makeDoubleList(int arr[],int s);//通过数组建立一个链表
void print(DoubleList L);//打印链表
void addBack(int value,DoubleList L);//尾部追加
void addFront(int value,DoubleList L);//头部追加
int isEmpty(DoubleList L);//判断是否为空
Position head(DoubleList L);//返回链表头部
int first(DoubleList L);//返回第一个元素
int last(DoubleList L);//返回最后一个元素
Position tail(DoubleList L);//返回尾部
void insertBefore(int value,DoubleList L,Position p);//指定位置之前插入
void insertAfter(int value,DoubleList L,Position p);//指定位置之后插入
void deleteValue(int value,DoubleList L);//删除元素
Position findValue(int value,DoubleList L);	//查找元素，返回位置
void deleteDoubleList(DoubleList L);//删除链表
void deletePosition(Position p,DoubleList L);//删除指定位置

#endif
