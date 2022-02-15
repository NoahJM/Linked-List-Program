#include <iostream>
#include <iomanip>
#include <string>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
	
	head = NULL;
	temp = NULL;
	current = NULL;
	
}

LinkedList::~LinkedList(){
	
	delete head;
	delete temp;
	delete current;
	
}

void LinkedList::Insertnode(int value){
	
	cout << "Please enter the value in which you want stored: " << endl;
	cin >> value;
	
	if(head == NULL)
	{
		head = new Node;                 //Creates head
		head -> data = value;            //Gives value to head
		head -> next = 0;                //Points head at NULL
		current = head;                  //Makes current and head same node	
	}
	else
	{
		temp = new Node;                 //Create new node
		temp -> data = value;            //Assign value to new node
		current -> next = temp;          //Put new node after the current node
		temp -> next = 0;                //Make new node point at null
		current = temp;                  //Make new node the current node
		temp = 0;                        //Clear temp
	}
}

void LinkedList::Searchnode(int value){
	
	cout << "Please enter the value in which you want to search for: " << endl;
	cin >> value;
	
	current = head;
	while(current != 0)
	{
		current = current -> next;
		if(current -> data == value)
		{
			cout << "Value Found!\n";
			break;
		}
	}
	cout << "Value not found.\n";
}

void LinkedList::Removenode(int value){
	
	temp = head;
	if(temp = current)
	{
		head = head -> next;
		current = head;
		delete temp;
		temp = 0;
	}
	else
	{
		while(temp -> next != current)
		{
			temp = temp -> next;
		}
		if(current -> next != 0)
		{
			temp -> next -> next = current;
			temp = temp -> next;
			delete temp;
			temp = 0;
		}
		else
		{
			temp -> next = 0;
			temp = current;
			current = head;
			delete temp;
			temp = 0;
		}
		
	}
}

void LinkedList::Displaynode(void){
	
	int count = 0;
	temp = head;
	
	while(temp->next != 0)
	{
		cout << "Current node data: " << endl;
		cout << count << ". " << temp->data << endl;
		temp = temp->next;
		count++;
		
	}
	
}

ostream& operator<<(ostream& outp, const LinkedList& l)
{
}

