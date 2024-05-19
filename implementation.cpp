#include "DATA.h"
#include <iostream>

using namespace std;

// Inserts an element at the beginning of the list
    void LinkedList :: insertAtBeginning(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }

    // Inserts an element at a specific position
    void LinkedList :: insertAfter(int val, int pos) {
        Node* temp = head;
        for (int i = 1; i < pos; i++) {
            if (temp == NULL) {
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Inserts an element at the end of the list
    void LinkedList :: insert(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Removes the element at a specified location from a non-empty list
    void LinkedList :: removeAt(int pos) {
        Node* temp1 = head;
        if (pos == 1) {
            head = temp1->next;
            delete temp1;
            return;
        }
        for (int i = 1; i < pos - 1; i++) {
            temp1 = temp1->next;
        }
        Node* temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }

    // Searches for an element in the list
    bool LinkedList :: search(int val) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == val) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Returns the number of elements in the list
    int LinkedList :: getSize() {
        Node* temp = head;
        int size = 0;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        return size;
    }

    // Returns true if the list is empty, otherwise returns false
    bool LinkedList :: isEmpty() {
        return head == NULL;
    }

    // Returns true if the list is full, otherwise returns false
    bool LinkedList :: isFull() 
	{
		if (getSize() != 10) {
        	return false;
    	}
    	else if (getSize() == 10) {
    		return true;
		}
	}

    // Displays the elements in the list
    void LinkedList :: printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
