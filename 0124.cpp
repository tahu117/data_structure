#include "stdafx.h"
#include <stdlib.h>

typedef int Element;
typedef struct LinkedNode {
	Element data;
	LinkedNode *link;
}ListNode;

void removeNode(ListNode **phead, ListNode *p, ListNode *removed) {
	if (p == NULL) {
		*phead = (*phead)->link;
	}
	else {
		p->link = removed->link;
	}
	free(removed);
}

Element find(ListNode *phead, Element f) {
	ListNode *p = phead;

	while (p != NULL) {
		if (p->data == f) {
			return 1;
		}
		p = p->link;
	}
	return 0;
}

void sumlist(ListNode list1, ListNode list2) {
	//����Ʈ1 �� ���� ã��
	//����Ʈ2 �� �ص尡 ����Ű�� ��带 ���� ���δ�.





	//����Ʈ1 �� ���� ����Ʈ2�� ���δ�.
	//����Ʈ2 �� ���� �������.
}