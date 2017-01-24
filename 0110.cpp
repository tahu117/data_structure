#include "stdafx.h"
#include <stdlib.h>

typedef int Element;
typedef struct LinkedNode {
	Element data;
	LinkedNode *link;
}ListNode;

void removeNode(ListNode **phead, ListNode *p, ListNode *removed);
Element find(ListNode *phead, Element f);

void insertNode(ListNode **phead, ListNode *p, ListNode *newNode) {
	if (*phead == NULL) {//�ص��尡 NULL
		newNode->link = NULL; //(*newNode).link = NULL
		*phead = newNode;
	}
	/*
	header-->[]() ------>[](NULL)  ==> header-->[]()------��> [](NULL) ==> header-->[]()��-----��> [](NULL) ==> header-->[]()��     ��> [](NULL)
				  []()							      []()��							��>[]()��			                 ��>[]()��
	*/
	else if (p == NULL) {//�����ϴ� ������ ù��° ���
		newNode->link = *phead;
		*phead = newNode;
	}
	/*
	header------> []() -->[](NULL)  ==> header------��> []() --> [](NULL) ==> header��-----��> []() --> [](NULL) ==> header��     ��> []() --> [](NULL)
			[]()								[]()��					 			��>[]()��							   ��>[]()��					 	
	*/
	else {//���� �ΰ��� �ش���� ������
		newNode->link = p->link;
		p->link = newNode;
	}
	/*
	header-->[]() -->[](NULL)       ==> header-->[]() -->[](NULL)          ==> header-->[]() -->[]() ��   
                              []()		                          [](NULL) 	                         ��>[](NULL)
	*/
}

ListNode *createNode(Element data) {
	ListNode *newNode;

	newNode = (ListNode *)malloc(sizeof(ListNode));

	newNode->data = data;
	newNode->link = NULL;
	return newNode;

}

void display(ListNode *head) {
	ListNode *p;
	p = head;
	int a = 1;
	while (p != NULL) {
		printf("%d��° data : %d\n", a++, p->data);
		p = p->link;
	}
}

void ds0110() {

	ListNode *head = NULL;

	insertNode(&head, NULL, createNode(3));
	insertNode(&head, NULL, createNode(8));
	insertNode(&head, NULL, createNode(9));
	insertNode(&head, NULL, createNode(15));
	insertNode(&head, NULL, createNode(88));
	insertNode(&head, NULL, createNode(13));

	display(head);
}

//������ ������