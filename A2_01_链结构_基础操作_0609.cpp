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
	cout << "����������" << n << "�������ֵ��";
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
	cout << "����������" << n << "�������ֵ" << endl;
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
		cout << "����λ�ô���" << endl;
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
		cout << "ɾ��λ�ô���" << endl;
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
	cout << "������ı�������Ϊ��" << endl;
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
		cout << "ָ��λ�ô���" << endl;
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
		cout << "Ԫ��δ�ҵ�" << endl;
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

	cout << "������ĳ���Ϊ��" << link_list.listLength() << endl;
	cout << "��ȡָ��λ�õ�Ԫ��" << link_list.getData(3) << endl;
	cout << "��ȡָ��Ԫ�ص�λ��" << link_list.search(4) << endl;

	system("pause");
}