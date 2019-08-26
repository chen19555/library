#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
	char data;
	Node *lchild;
	Node *rchild;
};

void createBiTree(Node *&T)
{
	char ch;
	cin >> ch;

	if (ch == '#')
	{
		T = NULL;
	}
	else
	{
		T = new Node();
		T->data = ch;

		createBiTree(T->lchild);
		createBiTree(T->rchild);
	}
}

void preTraverse(Node *&T)
{
	if (T)
	{
		cout << T->data << ends;
		preTraverse(T->lchild);
		preTraverse(T->rchild);
	}
}

//·ÇµÝ¹é±éÀú
void traverseTreeBack(Node *T)
{
	stack<Node *> stk;
	stk.push(T);
	Node *last_pop = T;

	while (!stk.empty())
	{
		Node *top = stk.top();
		if (top->lchild != nullptr && top->lchild != last_pop && top->rchild != last_pop)
		{
			stk.push(top->lchild);
		}
		else if (top->rchild != nullptr && top->rchild != last_pop)
		{
			stk.push(top->rchild);
		}
		else
		{
			last_pop = top;
			cout << top->data << ends;
			stk.pop();
		}
	}
}


void main31()
{
	Node *T;

	createBiTree(T);

	cout << endl;

	traverseTreeBack(T);

	//preTraverse(T);

	system("pause");
}