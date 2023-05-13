#pragma once
#include <iostream>
#include <string>
#include <sstream>

/*
@brief struct Node
*/
struct Node
{
	/*
	@brief function overloading the operator ==
	@param otherData which will be copied to new Node
	*/
	void operator= (const int otherData);

	/*
	@brief function overloading the operator []
	@param data contained in Node
	@param pointerNext pointer to the next Node
	*/

	Node(int data = 0, Node* pointerNext = nullptr);

	Node* pointerNext;

	int data;

	
};