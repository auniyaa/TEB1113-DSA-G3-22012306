/* 
Name : AUNI ALYAA NATASYA BINTI MOHMAD SALUDDIN
ID : 22012306
*/

#include <iostream>
using namespace std;

struct Node {
    string name;
    Node* next_ptr;

    Node(string n) : name(n), next_ptr(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Add new node at the end
    void add_element(string name) {
        Node* new_node = new Node(name);

        if (head == nullptr) {
            head = new_node;
            tail = new_node;
            tail->next_ptr = head;
        } else {
            tail->next_ptr = new_node;
            tail = new_node;
            tail->next_ptr = head;
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
            cout << current->name << " -> ";
            current = current->next_ptr;
            
        } while (current != head);
        cout << head->name << endl;  // To show the circular link back to head
    }

};

int main() {
    LinkedList list;
    list.add_element("Ali");
    list.add_element("Ahmed");
    list.add_element("Abu");
    list.display_list();  

    return 0;
}
