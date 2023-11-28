#include <iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insert at the end
    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Delete a node with a specific value
    void remove(int value) {
        Node* current = head;
        Node* prev = nullptr;

        while (current && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current) {
            if (prev) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            delete current;
        }
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        Node* nextNode = nullptr;
        while (current) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

// Main function
int main() {
    LinkedList myList;

    // Insert nodes
    myList.insert(1);
    myList.insert(2);
    myList.insert(3);

    // Display the linked list
    cout << "Linked List: ";
    myList.display();

    // Remove a node
    myList.remove(2);

    // Display the modified linked list
    cout << "Modified Linked List: ";
    myList.display();

    return 0;
}
