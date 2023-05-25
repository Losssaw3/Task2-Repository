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
		Node* current = head;
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
	std::stringstream buffer;
	if (head != nullptr)
	{
		Node* current = head;
		for (size_t i = 0; i < size; i++)
		{
			buffer << current->data << ' ';
			current = current->pointerNext;
		}
	}
	return buffer.str();
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

List::List(List&& second) noexcept
{
	if (this->head == nullptr)
	{
		for (Node* node = second.head; node != nullptr; node = node->pointerNext)
		{
			this->pushBack(node->data);
		}
	}
}

bool List::operator==(List& second)
{
	return(this->toString() == second.toString());
}

List& List::operator=(const List& second)
{
	std::__exchange(this->head, second.head);
	return *this;
}

List& List::operator=(List&& second) noexcept
{
	if (this->head == nullptr)
	{
		for (Node* node = second.head; node != nullptr; node = node->pointerNext)
		{
			this->pushBack(node->data);
		}
	}
	return *this;
}

List::List(const List& second)
{
	std::__exchange(this->head, second.head);
}
