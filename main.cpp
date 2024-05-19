#include "DATA.h"
#include <iostream>

// The max data that can be inputted in the list is 10.

using namespace std;

int main() {
    LinkedList list;
    int choice, position, data;
    
    do {
        cout << "\nList Operations:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at position\n";
        cout << "4. Remove at position\n";
        cout << "5. Search\n";
        cout << "6. Display list\n";
        cout << "7. Get size\n";
        cout << "8. Check if list is empty\n";
        cout << "9. Check if list is full\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
        	if(list.getSize() !=10) {
        		cout << "---------------------------------\n" << endl;
	            cout << "Enter data to be inserted at beginning: ";
	            cin >> data;
	            list.insertAtBeginning(data);
	            system("CLS");
	            cout << "Data have successfully inserted!\n";
        	} else {
        		system("CLS");
        		cout << "The list is already full." << endl;
			}
            break;
        case 2:
        	if (list.getSize() != 10) {
        		cout << "---------------------------------\n" << endl;
	            cout << "Enter data to be inserted at end: ";
	            cin >> data;
	            list.insert(data);
	            system("CLS");
	            cout << "Data have successfully inserted!\n";
	    	} else {
	    		system("CLS");
	    		cout << "The list is already full." << endl;
			}
            break;
        case 3:
        	if (list.getSize() != 10) {
	        	cout << "---------------------------------\n" << endl;
	            cout << "Enter data to be inserted: ";
	            cin >> data;
	            cout << "Enter position to insert data: ";
	            cin >> position;
	            list.insertAfter(data, position);
	            system("CLS");
	            cout << "Data have successfully inserted!\n";
	        } else {
	    		system("CLS");
	    		cout << "The list is already full." << endl;
			}
            break;
        case 4:
        	cout << "---------------------------------\n" << endl;
            cout << "Enter position of data to be removed: ";
            cin >> position;
            list.removeAt(position);
            system("CLS");
            cout << "Data have successfully removed!\n";
            break;
        case 5:
        	cout << "---------------------------------\n" << endl;
            cout << "Enter data to search: ";
            cin >> data;
            if (list.search(data))
            {
            	system("CLS");
                cout << "Element found in the list\n";
           	}
            else
            {
            	system("CLS");
                cout << "Element not found in the list\n";
        	}
            break;
        case 6:
        	system("CLS");
            cout << "Elements in the list are: ";
            list.printList();
            break;
        case 7:
        	system("CLS");
            cout << "Size of the list is: " << list.getSize() << endl;
            break;
        case 8:
            if (list.isEmpty())
            {
            	system("CLS");
                cout << "List is empty\n";
           	}
            else
            {
            	system("CLS");
                cout << "List is not empty\n";
            }
            break;
        case 9:
            if (list.isFull())
            {
            	system("CLS");
                cout << "List is full\n";
            }
            else
            {
            	system("CLS");
                cout << "List is not full\n";
            }
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice, please try again\n";
            break;
        }
    } while (choice != 0);

    return 0;
}

