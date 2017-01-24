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
	//리스트1 의 끝을 찾고
	//리스트2 의 해드가 가리키는 노드를 끝에 붙인다.





	//리스트1 의 끝에 리스트2를 붙인다.
	//리스트2 의 헤드는 사라진다.
}