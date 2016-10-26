#ifndef _MIDTOPOST_H_
#define _MIDTOPOST_H_

int OperaterCompare(char a,char b);//运算符比较，a的优先级大于等于b 返回结果非负
void MidToPost(char arr[],int len);
int IsOperetor(char c);
#endif
