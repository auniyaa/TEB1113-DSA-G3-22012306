/*
NAME : AUNI ALYAA NATASYA BINTI MOHMAD SALUDDIN 
ID : 22012306
*/

#include <iostream>
using namespace std;

// Define Node structure
struct Node {
    string name;
    Node* next;
};

// Define LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Add node to end of list
    void addNode(string name) {
        Node* newNode = new Node;
        newNode->name = name;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Display all nodes
    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->name << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Delete node by value
    void deleteNodeByName(string name) {
        if (head == nullptr) return;

        // If the head needs to be deleted
        if (head->name == name) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        // Find the node before the one to delete
        Node* current = head;
        while (current->next != nullptr && current->next->name != name) {
            current = current->next;
        }

        if (current->next != nullptr) {
            Node* toDelete = current->next;
            current->next = current->next->next;
            delete toDelete;
        }
    }
};

int main() {
    LinkedList stdNames;

    stdNames.addNode("Ali");
    stdNames.addNode("Alice");
    stdNames.addNode("Aliya");

    cout << "Original list: ";
    stdNames.displayList();

    stdNames.deleteNodeByName("Alice");

    cout << "After deleting 'Alice': ";
    stdNames.displayList();

    return 0;
}
