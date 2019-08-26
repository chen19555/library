#include <iostream>
using namespace std;

struct ListNode
{
	int m_nKey;
	ListNode *m_pNext;
};

ListNode *ReverseList(ListNode * pHead)
{
	ListNode * pReverseHead = nullptr;
	ListNode * pNode = pHead;
	ListNode * pPrev = nullptr;
	while (pNode != nullptr)
	{
		ListNode * pNext = pNode->m_pNext;

		if (pNext == nullptr)
		{
			pReverseHead = pNode;
		}
		
		pNode->m_pNext = pPrev;

		pPrev = pNode;
		pNode = pNext;
	}
	return pReverseHead;
}