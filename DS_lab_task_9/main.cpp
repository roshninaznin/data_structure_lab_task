#include <iostream>

using namespace std;

const int max_size = 100;

int stack[max_size];
int top = -1;

void push(int value) {
    if (top < max_size - 1) {
        stack[++top] = value;
    }
}

void pop() {
    if (top >= 0) {
        top--;
    }
}

int topElement() {
    if (top >= 0) {
        return stack[top];
    }
    return -1;
}

bool empty() {
    return top == -1;
}

void removeLowestElement() {
    if (empty()) {
        return;
    }

    int lowestElement = stack[0];
    int lowestIndex = 0;

    for (int i = 1; i <= top; i++) {
        if (stack[i] < lowestElement) {
            lowestElement = stack[i];
            lowestIndex = i;
        }
    }


    for (int i = lowestIndex; i < top; i++) {
        stack[i] = stack[i + 1];
    }

    top--;
}

int main() {

    cout << "Input some elements onto the stack: ";
    int n;
    while (cin >> n) {
        push(n);
    }

    removeLowestElement();


    cout << "Stack elements are: ";
    while (!empty()) {
        cout << topElement() << " ";
        pop();
    }

    cout << endl;

    return 0;
}
