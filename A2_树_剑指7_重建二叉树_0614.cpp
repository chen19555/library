#include <iostream>
using namespace std;

struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};

BinaryTreeNode* ConstructCore(int* startPreorder, int* endPreorder, int* startInorder, int* endInorder)
{
	int rootValue = startPreorder[0];
	BinaryTreeNode* root = new BinaryTreeNode();
	root->m_nValue = rootValue;
	root->m_pLeft = nullptr;
	root->m_pRight = nullptr;

	if (startPreorder == endPreorder)
	{
		if (startInorder == endInorder && *startPreorder == *startInorder)
		{
			return root;
		}
		else
		{
			throw std::exception("invalid input");
		}
	}

	int* rootInorder = startInorder;
	while (rootInorder <= endInorder && *rootInorder != rootValue)
	{
		++rootInorder;
	}

	if (rootInorder == endInorder && *rootInorder != rootValue)
	{
		throw std::exception("Invalid input");
	}

	int leftLength = rootInorder - startInorder;
	int* leftPreorderEnd = startPreorder + leftLength;
	if (leftLength > 0)
	{
		root->m_pLeft = ConstructCore(startPreorder + 1, leftPreorderEnd, startInorder, rootInorder - 1);
	}

	if (leftLength < endPreorder - startPreorder)
	{
		root->m_pRight = ConstructCore(leftPreorderEnd + 1, endPreorder, rootInorder + 1, endInorder);
	}
	return root;
}

BinaryTreeNode* Construct(int* preorder, int* inorder, int length)
{
	if (preorder == nullptr || inorder == nullptr || length <= 0)
	{
		return nullptr;
	}

	return ConstructCore(preorder, preorder + length - 1, inorder, inorder + length - 1);
}


///** 牛客
//* Definition for binary tree
//* struct TreeNode {
//*     int val;
//*     TreeNode *left;
//*     TreeNode *right;
//*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//* };
//*/
//class Solution {
//public:
//	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
//
//		//递归出口
//		if (pre.size() == 0)
//		{
//			return nullptr;
//		}
//
//		//找到该树的根节点（前序），并找出根节点在中序数组中的索引
//		int root_val = pre[0];
//		int index;
//		TreeNode *node = new TreeNode(root_val);
//
//		for (int i = 0; i < vin.size(); i++)
//		{
//			if (vin[i] == root_val)
//			{
//				index = i;
//				break;
//			}
//		}
//
//		vector<int> sub_pre1;
//		vector<int> sub_vin1;
//		vector<int> sub_pre2;
//		vector<int> sub_vin2;
//		for (int i = 1; i <= index; i++)
//		{
//			sub_pre1.emplace_back(pre[i]);
//		}
//		for (int i = index + 1; i < pre.size(); i++)
//		{
//			sub_pre2.emplace_back(pre[i]);
//		}
//		for (int i = 0; i < index; i++)
//		{
//			sub_vin1.emplace_back(vin[i]);
//		}
//		for (int i = index + 1; i < vin.size(); i++)
//		{
//			sub_vin2.emplace_back(vin[i]);
//		}
//
//		//递归
//		node->left = reConstructBinaryTree(sub_pre1, sub_vin1);
//		node->right = reConstructBinaryTree(sub_pre2, sub_vin2);
//		return node;
//	}
//};
