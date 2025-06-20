/*
NAME: AUNI ALYAA NATASYA BINTI MOHMAD SALUDDIN
ID :22012306
*/

#include <iostream>
using namespace std;

// Define Node structure
struct Node {
    string name;
    Node* next;
    Node* prev;
};

// Define DoublyLinkedList class
class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    // Add node to the end of the list
    void addNode(string name) {
        Node* newNode = new Node;
        newNode->name = name;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    // Display list from head to tail
    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->name << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Delete a node by value (name)
    void deleteNodeByName(string name) {
        if (head == nullptr) return;

        Node* temp = head;

        // If the head is the node to delete
        if (head->name == name) {
            Node* toDelete = head;
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete toDelete;
            return;
        }

        // Traverse to find the node
        while (temp != nullptr && temp->name != name) {
            temp = temp->next;
        }

        if (temp == nullptr) return; // Not found

        // Adjust links
        if (temp->prev != nullptr)
            temp->prev->next = temp->next;

        if (temp->next != nullptr)
            temp->next->prev = temp->prev;

        delete temp;
    }
};

int main() {
    DoublyLinkedList stdNames;

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
