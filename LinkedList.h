using namespace std;

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node{
	int data;
	Node *next;
};

class LinkedList{
	public:
		
		LinkedList(); //Constructor
		~LinkedList(); //Destructor
		
		void Insertnode(int);
		void Searchnode(int);
		void Removenode(int);
		void Displaynode(void);
		
		//overloaded operator
		friend ostream& operator<<(ostream&,const LinkedList&);
		
		
		
	private:
		Node* head;
		Node* current;
		Node* temp;
};

#endif
