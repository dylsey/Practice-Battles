#include <iostream>

struct node
{
	int data;
	node* next;
};

int main()
{
	node* head{ new node };
	head->data = 0;

	int numNodes{ 10 };
	node* currNode{ head };

	for (int i{ 1 }; i < numNodes; i++)
	{
		while (currNode->next != nullptr)
		{
			currNode = currNode->next;
		}

		node* temp{ new node };
		temp->next = nullptr;

		currNode->next = temp;
		currNode = currNode->next;
		currNode->data = i;
	}
}
//Linked List
//Let's look at the individual lines below to see what's happening.
//
//11::The head node keeps track of the first node in our list.
//12::Setting the data for our first node.
//15::currNode keeps track of where we are in the list and is initialized with the address in the head.This puts us at the beginning of the list.
//19 - 22:: this is fairly pointless here, but it guarantees we are at the end of the list.The last node will always have nullptr stored in its next member.
//21::This is the line  used to move on to the next item in the list.
//24 - 25::creates a new node and ensures next is nullptr
//27::currNode is at the end of the list, so we set it's next member to temp, which adds temp to the end of the list.
//28::moves currNode to the new last node of the list.
//29::assigns data to that last node.