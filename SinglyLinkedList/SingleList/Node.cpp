#include "Node.h"

Node::Node(int data, Node* pointerNext)
	: data(data), pointerNext(pointerNext)
{
}
void Node::operator=(const int otherData)
{
	this->data = otherData;
}