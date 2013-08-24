#include "node.h"
#include <iostream>

Node::Node()
{

}

Node::Node(int iValue)
{
	miValue = iValue;
}

Node::~Node()
{
}

void Node::print()
{
	std::cout << "Label: " + getLabel() + ", Value: " + std::to_string(static_cast<long long>(getValue())) << std::endl;
}