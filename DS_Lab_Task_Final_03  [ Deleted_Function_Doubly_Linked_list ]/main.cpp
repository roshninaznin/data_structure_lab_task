#include <iostream>

using namespace std;

struct node {
    int data;
    struct node* prev;
    struct node* next;
};


void deleteFirst(struct node*& head) {
    if (head != NULL) {
        struct node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
    }
}


void deleteAfter(struct node* prevNode) {
    if (prevNode != NULL && prevNode->next != NULL) {
        struct node* temp = prevNode->next;
        prevNode->next = temp->next;

        if (temp->next != NULL) {
            temp->next->prev = prevNode;
        }

        delete temp;
    }
}


void deleteLast(struct node*& head) {
    if (head == NULL) {
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        }
        else {
        struct node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }

        if (last->prev != NULL) {
            last->prev->next = NULL;
        }

        delete last;
    }
}

void printList(struct node* head) {
    struct node* ptr = head;
    while (ptr != NULL) {
        cout << "Link Data Are : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main() {

    struct node* head = new node();
    head->data = 30;
    head->prev = NULL;
    head->next = NULL;


    struct node* current = new node();
    current->data = 40;
    current->prev = head;
    current->next = NULL;

    head->next = current;


    current = new node();
    current->data = 50;
    current->prev = current;
    current->next = NULL;

    head->next->next = current;

    current = new node();
    current->data = 60;
    current->prev = current;
    current->next = NULL;

    head->next->next->next = current;


    cout << "Original Linked List: "<<endl;
    printList(head);
    cout <<endl;


    deleteFirst(head);
    cout << "Linked List after deleting first node: "<<endl;
    printList(head);
    cout <<endl;


    deleteAfter(head);
    cout << "Linked List after deleting node after head:"<<endl;
    printList(head);
    cout <<endl;


    deleteLast(head);
    cout << "Linked List after deleting last node:"<<endl;
    printList(head);

    return 0;
}
