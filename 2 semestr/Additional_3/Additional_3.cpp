#include <iostream>
#include "Header.hpp"

struct list
{
	int field; // ���� ������
	struct list* next; // ��������� �� ��������� �������
	struct list* prev; // ��������� �� ���������� �������
};

struct list* INIT(int a)  // �- �������� ������� ����
{
	struct list* list;
	// ��������� ������ ��� ������ ������
	list = (struct list*)malloc(sizeof(struct list));
	list->field = a;
	list->next = list; // ��������� �� ��������� ����
	list->prev = list; // ��������� �� ���������� ����
	return(list);
}

struct list* ADD(list* list, int number)
{
	struct list* temp, * p;
	temp = (struct list*)malloc(sizeof(list));

	p = list->next; // ���������� ��������� �� ��������� ����
	list->next = temp; // ���������� ���� ��������� �� �����������

	temp->field = number; // ���������� ���� ������ ������������ ����

	temp->next = p; // ��������� ���� ��������� �� ��������� ����
	temp->prev = list; // ��������� ���� ��������� �� ���������� ����
	p->prev = temp;
	return(temp);
}

struct list* DELETE(list* list)
{
	struct list* prev, * next;
	prev = list->prev; // ����, �������������� lst
	next = list->next; // ����, ��������� �� lst
	prev->next = list->next; // ������������ ���������
	next->prev = list->prev; // ������������ ���������
	free(list); // ����������� ������ ���������� ��������
	return(prev);
}

void PRINT(list* list)
{
	struct list* p;
	p = list;
	do {
		printf("%d ", p->field); // ����� �������� �������� p
		p = p->next; // ������� � ���������� ����
	} while (p != list); // ������� ��������� ������
}

void PRINTR(list* list)
{
	struct list* p;
	p = list;
	do {
		p = p->prev;  // ������� � ����������� ����
		printf("%d ", p->field); // ����� �������� �������� p
	} while (p != list); // ������� ��������� ������
}

int main()
{
	list* list = INIT(10);
	ADD(list, 15);
	ADD(list, 1);
	ADD(list, 3);
	PRINT(list);
	DELETE(list);
	return 0;
}