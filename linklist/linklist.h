#ifndef _LINKLIST_H_
#define _LINKLIST_H_


template <typename T>
class LinkList
{
	public:
			LinkList() 
			{ 
				header = new LinkNode<T>;
			} //无参构造函数

			LinkList(const T &value) 
			{ 
				header = new LinkNode<T>(value);
			}//带参构造函数

			LinkList(LinkList<T> &ls);
			LinkList& operator= (LinkList<T> &ls);
			~LinkList();
			void clear();
			int lenth();
			int isEmpty();
			LinkNode<T> getHead();
			void setHead(LinkNode<T> *p);

			void print();
	private:
			LinkNode<T>  *header;

};

#endif
