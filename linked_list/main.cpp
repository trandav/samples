#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "node.h"

// this practices using arrays and linked lists
int main()
{
	Node * nodeArray[10];
	for (int i = 0; i < 10; i++)
	{
		nodeArray[i] = new Node();
		nodeArray[i]->setLabel("Node " + std::to_string(static_cast<long long>(i)));
		nodeArray[i]->setValue(rand() % 10 + 1);
		if (i == 0)
			nodeArray[i]->setNext(NULL);
		else
			nodeArray[i]->setNext(nodeArray[i - 1]);
	}

	Node * temp;
	temp = nodeArray[9];

	// printing out the value
	while (temp != NULL)
	{
		temp->print();
		temp = temp->getNext();
	}
	
	// clean up the memory
	for (int i = 0; i < 10; i++)
	{
		delete nodeArray[i];
	}
	
	return 0;
}