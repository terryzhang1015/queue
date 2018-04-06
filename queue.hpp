#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>

using namespace std;

template <class Tp>
struct Node
{
	Tp data;
	Node *next;

	Node()
	{
		next = NULL;
	}
};

template <class Tp>
class queue
{
public:
	queue()
	{
		Node <Tp> *p = new Node<Tp>;
		head = tail = p;
		s = 0;
	}

	inline void push(const Tp &x)
	{
		Node <Tp> *p = new Node<Tp>;

		p->data = x;

		tail->next = p;
		tail = p;

		s++;
	}

	inline void pop()
	{
		Node <Tp> *p = head->next;

		head->next = p->next;

		if (tail == p)
			tail = head;
		delete p;

		s--;
	}

	inline Tp front() const
	{
		return head->next->data;
	}

	inline Tp end() const
	{
		return tail->data;
	}

	inline int size() const
	{
		return s;
	}

	inline bool empty() const
	{
		return !s;
	}

	~queue()
	{
		delete head, tail;
	}

protected:
	Node <Tp> *head, *tail;
	int s;
};

#endif
