#include <iostream>
using namespace std;

int n = 5;
int queue[5];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == n - 1) {
        cout << "Overflow" << endl;
    }
    else if(front == -1 && rear == -1) {

       front = rear = 0;
       queue[rear]=x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if(front == -1 && rear == -1) {
        cout << "Underflow. " << endl;
    } else if(front == rear) {
        front = rear = -1;
    }
    else {
            front++;
        }
    }


void display() {
    int i;
     if(front == -1 && rear == -1) {
        cout << "Queue Is Empty. " << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    cout << "Enqueue values are: " << endl;
    display();
    cout << endl;

    dequeue();
    dequeue();

    cout << "After Dequeue, enqueue values are: " << endl;
    display();
    cout << endl;

    enqueue(6);
    enqueue(7);
    cout << endl;

    cout << "After Enqueue new elements enqueue values are: " << endl;
    display();
    cout << endl;

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    cout << endl;

    cout << "After Dequeue elements are: " << endl;
    display();
    cout << endl;

    return 0;
}
