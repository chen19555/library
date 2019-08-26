#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};

class LinkList
{
public:
	Node *head;
public:
	LinkList();
	void createListFront(int n);
	void createListBack(int n);
	void insertList(int i, int e);
	void deleteList(int i);
	int getData(int i);
	int search(int obj);
	int listLength();
	void displayList();
};

LinkList::LinkList()
{
	head = new Node();
	head->next = nullptr;
}

void LinkList::createListFront(int n)
{
	Node *p;
	Node *temp;
	p = head;
	cout << "请依次输入" << n << "个链表的值：";
	for (int i = 0; i < n; i++)
	{
		temp = new Node;
		cin >> temp->data;
		temp->next = p->next;
		p->next = temp;
	}
}

void LinkList::createListBack(int n)
{
	Node *p;
	Node *temp;
	p = head;
	cout << "请依次输入" << n << "个链表的值" << endl;
	for (int i = 0; i < n; i++)
	{
		temp = new Node;
		cin >> temp->data;
		temp->next = nullptr;
		p->next = temp;
		p = temp;
	}
}

void LinkList::insertList(int i, int e)
{
	Node *p;
	p = head;
	int count = 0;
	while (p && i > count)
	{
		p = p->next;
		count++;
	}
	if (!p || i < 0)
	{
		cout << "插入位置错误" << endl;
	}
	else
	{
		Node *newNode;
		newNode = new Node;
		newNode->data = e;
		newNode->next = p->next;
		p->next = newNode;
	}
}

void LinkList::deleteList(int i)
{
	Node *p;
	p = head;
	int count = 0;
	while (p && count < i)
	{
		p = p->next;
		count++;
	}
	if (!p || i < 0)
	{
		cout << "删除位置错误" << endl;
	}
	else
	{
		Node *temp = new Node;
		temp = p->next;
		p->next = temp->next;
		delete temp;
	}
}

void LinkList::displayList()
{
	Node *p;
	p = head->next;
	cout << "该链表的遍历依次为：" << endl;
	while (p)
	{
		cout << p->data << ends;
		p = p->next;
	}
	cout << endl;
}

int LinkList::listLength()
{
	Node *p;
	p = head->next;
	int list_length = 0;
	while (p)
	{
		list_length++;
		p = p->next;
	}
	return list_length;
}

int LinkList::getData(int i)
{
	Node *p;
	p = head->next;
	int count = 0;
	while (count < i && p)
	{
		p = p->next;
		count++;
	}
	while (!p || i < 0)
	{
		cout << "指定位置错误" << endl;
		return -1;
	}
	return p->data;
}

int LinkList::search(int obj)
{
	Node *p;
	p = head->next;
	int count = 0;
	while (p && p->data != obj)
	{
		p = p->next;
		count++;
	}
	if (!p)
	{
		cout << "元素未找到" << endl;
		return -1;
	}
	return count;
}

void main21()
{
	LinkList link_list;
	link_list.createListBack(4);
	link_list.insertList(0, 100);
	link_list.deleteList(2);
	link_list.displayList();

	cout << "该链表的长度为：" << link_list.listLength() << endl;
	cout << "获取指定位置的元素" << link_list.getData(3) << endl;
	cout << "获取指定元素的位置" << link_list.search(4) << endl;

	system("pause");
}