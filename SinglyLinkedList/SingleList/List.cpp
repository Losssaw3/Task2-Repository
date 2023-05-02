#include "List.h"

List::List()
	:head(nullptr), size(0)
{
}

void List::pushBack(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = this->head;
		while (current->pointerNext != nullptr)
		{
			current = current->pointerNext;
		}
		current->pointerNext = new Node(data);
	}
	size++;
}

void List::pushFront(int data)
{
	head = new Node(data, head);
	size++;
}

int List::getSize()
{
	return this->size;
}

int& List::operator[](int index)
{
	int counter = 0;
	Node* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pointerNext;
		counter++;
	}
}

bool List::isCollectionClear()
{
	return size == 0;
}

std::string List::toString()
{
	std::string collection;
	if (this->head != nullptr)
	{

		Node* current = head;
		for (size_t i = 0; i < this->size; i++)
		{
			collection += std::to_string(current->data) + ' ';
			current = current->pointerNext;
		}
		return collection;
	}
	return collection;
}

List::List(List&& second) noexcept
{
	this->clear();
	for (Node* node = second.head; node != nullptr; node = node->pointerNext)
	{
		this->pushBack(node->data);
	}
}

List& List::operator=(const List& second) noexcept
{
	this->clear();
	for (Node* node = second.head; node != nullptr; node = node->pointerNext)
	{
		this->pushBack(node->data);
	}
	return *this;
}

List& List::operator=(List&& second) noexcept
{
	this->clear();
	for (Node* node = second.head; node != nullptr; node = node->pointerNext)
	{
		this->pushBack(node->data);
	}
	return *this;
}

void List::popFront()
{
	if (head != nullptr)
	{
		Node* temp = head;
		head = head->pointerNext;
		size--;
		delete temp;
	}
}

void List::clear()
{
	while (size)
	{
		popFront();
	}
}
List::~List()
{
	clear();
}


List::List(const List& other) noexcept
{
	this->clear();
	for (Node* node = other.head; node != nullptr; node = node->pointerNext)
	{
		this->pushBack(node->data);
	}
}