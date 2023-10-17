#include <iostream>
using namespace std;



int size = 10;
int stack[10];
int top = -1;



void push(int value) {
    if (top == size - 1) {
        cout << "Stack is full: " << endl;
    } else {
        top++;
        stack[top] = value;
    }
}


void pop() {
    if (top == -1) {
        cout << "Stack is empty: " << endl;
    } else {
        top--;
    }
}


void show_all_after_push() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Elements in the stack: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}


void show_top() {
    if (top == -1) {
        cout << "Stack is empty: " << endl;
    } else {
        cout << "Element at the top is: " << stack[top] << endl;
    }
}



void show_all_after_pop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Elements in the stack: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}




int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);



    show_top();
    show_all_after_push();

    pop();
    pop();
    pop();
    pop();


    show_top();
    show_all_after_pop();
    return 0;
}
