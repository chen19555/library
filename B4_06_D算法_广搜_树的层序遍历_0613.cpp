#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	char data;
	Node *lchild, *rchild;
};

void createTree(Node *&T)
{
	char ch;
	cin >> ch;
	if (ch == '#')
	{
		T = nullptr;
	}
	else
	{
		T = new Node;
		T->data = ch;
		createTree(T->lchild);
		createTree(T->rchild);
	}
}

void traverseTree(Node *T)
{
	if (T)
	{
		traverseTree(T->lchild);
		cout << T->data << ends;
		traverseTree(T->rchild);
	}
}

void BST(Node *T)
{
	queue<Node *> que;
	que.push(T);
	Node *last = T;
	Node *nlast = nullptr;

	while (!que.empty())
	{
		if (last->rchild == nlast)
		{
			last = nlast;
			cout << endl;
		}

		Node *temp = que.front();
		que.pop();

		cout << temp->data << ends;

		if (temp->lchild != nullptr)
		{
			que.push(temp->lchild);
			nlast = temp->lchild;
		}

		if (temp->rchild != nullptr)
		{
			que.push(temp->rchild);
			nlast = temp->rchild;
		}
	}
}

void main46()
{
	Node * root;
	createTree(root);
	BST(root);

	system("pause");
}

/*

1
2    3
4   5 6  7
124##5##36##7##
*/