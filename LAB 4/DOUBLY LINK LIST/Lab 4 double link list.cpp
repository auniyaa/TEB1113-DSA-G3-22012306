/*
Name : AUNI ALYAA NATASYA BINTI MOHMAD SALUDDIN
ID : 22012306
*/

#include <iostream>
using namespace std;

struct Node {
    string name;
    Node* next;
    Node* prev;

    Node(string n) : name(n), next(nullptr), prev(nullptr) {}
};

class DoublyCircularLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyCircularLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Add new node at the end
    void add_element(string name) {
        Node* new_node = new Node(name);

        if (head == nullptr) {
            head = new_node;
            tail = new_node;
            head->next = head;
            head->prev = head;
        } else {
            tail->next = new_node;
            new_node->prev = tail;
            new_node->next = head;
            head->prev = new_node;
            tail = new_node;
        }
    }

    // Display the list
    void display_list() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node* current = head;
        do {
            cout << current->name << " <-> ";
            current = current->next;
        } while (current != head);

        cout << head->name << ")" << endl;
    }
};

int main() {
    DoublyCircularLinkedList list;
    list.add_element("Ali");
    list.add_element("Ahmed");
    list.add_element("Abu");
    list.display_list();

    return 0;
}