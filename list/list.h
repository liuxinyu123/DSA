#ifndef _LIST_H_
#define _LIST_H_

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode  Position;

List creatList(int arr[],int s);//创建链表
List initList();//创建一个空的链表
int isLast(Position p,List L);//判断是否为最后一个位置
int isEmpty(List L);//判断是否为空
Position findValue(int value,List L);//查找元素位置
Position findPrevious(int value,List L);//查找元素前驱
Position findNext(int value,List L);//查找元素后继
void insertAfter(int x,List L,Position p);//指定位置之后插入元素
void insertBefore(int x,List L,Position p);//指定位置之前插入
void addBack(int value,List L);//在链表尾添加
void addFront(int value,List);//在链表头添加
void deleteValue(int value,List L);//删除元素
void deletePosition(Position p,List L);//删除指定位置处的元素
void deleteList(List L);//删除链表
Position  head(List L);//返回表头
Position first(List L);	//返回首节点
Position last(List L);//返回尾节点
Position advance(List L);
int retrive(Position p);
void sort(List L);//排序
void print(List L);//打印出链表元素

#endif
