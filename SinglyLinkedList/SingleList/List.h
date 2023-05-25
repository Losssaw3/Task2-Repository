#pragma once
#include "Node.h"
#include <string>

/*
@brief Class SinglyLinkedList
*/
class List

{
public:
	/*
	@brief Initializes a new instance of the 'List' class
	*/
	List();

	/*
	@brief Delete dynamic memore of instance of the 'List' class
	*/
	~List();

	/*
	@brief Copy an object of 'List' class 
	@param Other other list which will be copied
	*/
	List(const List& second);

	/*
	@brief Move an object of 'List' class to other
	@param Second other list which will be moved
	*/
	List(List&& second) noexcept;

	/*
	@brief a function which delete a Node in front of List
	*/
	void popFront();

	/*
	@brief function which delete all Nodes of List
	*/
	void clear();

	/*
	@brief a function which add a Node to the back of the List
	@param data data which will be added
	*/
	void pushBack(int data);

	/*
	@brief a function which add a Node to the front of the List
	@param data data which will be added
	*/
	void pushFront(int data);

	/*
	@brief a function which returns size of a List
	@return a size of a List
	*/
	int getSize();

	/*
	@brief function overloading the operator []
	@param index a number of element
	@return value with given index
	*/
	int& operator[](int index);

	/*
	@brief function which check the size of collection
	@return true if collection clear, false if collection isn't clear
	*/
	bool isCollectionClear();

	/*
	@brief function which convert collection into string
	@return string which consist of Nodes
	*/
	std::string toString();
	
	/*
	@brief function overloading the operator ==
	@param second List which will be copied
	@return new copied List
	*/
	List& operator=(const List& second);

	/*
	@brief function overloading the operator ==
	@param second List which will be moved
	@return moved List
	*/
	List& operator=(List&& second) noexcept;

	/*
	@brief function overloading comparison operator
	@param second List will be compaired
	@return true if content of the list equal to second list and false otherwise
	*/
	bool operator==(List& second);

private:
	int size;
	Node* head;
};