#include "Binary.h"
#include <iostream>
#include <string>


using namespace std;

template<typename T>
struct Elem //создание списка
{
	T data;
	Elem<T>* next = NULL;
	Elem<T>* prev = NULL;
};

template<typename T>
void AddElemEnd(Elem<T>*& head, Elem<T>*& tail, T data)// передаём указатели чтобы в main были не копии
{
	Elem<T>* nw = new Elem<T>;
	nw->data = data;

	if (head == NULL)
	{
		head = nw;
		tail = nw;
		return;
	}
	nw->prev = tail;
	tail->next = nw;
	tail = nw;
	return;
};

template<typename T>
void View(Elem<T>* head)
{
	Elem<T>* help = head;
	while (help != NULL)
	{
		cout << help->data << "\t";
		help = help->next;
	}
}

int main()
{
	Elem<int>* head = NULL;
	Elem<int>* tail = NULL;

	for (int i = 0; i < 3; i++)
		AddElemEnd(head, tail, i);
	View(head);

	//head->data = 0;
	//head->prev = NULL;

	//head->next = new Elem<int>;
	//head->next->data = 1;
	//head->next->prev = head;
	//
	//Elem<int>* tail = new Elem<int>;
	//tail->data = 2;
	//tail->prev = head->next;

	node* root = new node{1, NULL,NULL};
	Binary tree(root);
}