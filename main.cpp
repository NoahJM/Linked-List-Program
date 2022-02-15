#include <iostream>
#include <iomanip>
#include <string>
#include "LinkedList.h"

using namespace std;

int main(int argc, char** argv) {
	
int menu, value;
int quitMenu = 1;

LinkedList List;

cout << "Please enter the value based on the option you wish to choice: " << endl
<< "1. Insert node" << endl
<< "2. Search for node" << endl
<< "3. Remove current node" << endl
<< "4. Display list of nodes" << endl
<< "5. Quit Program" << endl;
cin >> menu;

//Need to figure out a way for this  to loop until then end the program (enter 5)
while(quitMenu != 0){

	switch(menu)
	{
		case 1:
			List.Insertnode(value);
			system("PAUSE");
			menu = 0;
	
		case 2:
			List.Searchnode(value);
			break;
	
		case 3:
			List.Removenode(value);
			break;
		
		case 4:
			List.Displaynode();
			break;
		
		case 5:
			return 0;
		
	}
}
}

