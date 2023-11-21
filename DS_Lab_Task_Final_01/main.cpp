#include <iostream>
using namespace std;

int n = 5;
int queue [5];
int front = -1;
int rear = -1;

void enqueue (int x){
if((rear+1)%n==front){
    cout<<"Overflow"<<endl;
}

else if (front == -1 && rear == -1){
    front = rear = 0;
    queue[rear]= x;
}
else{
    rear=(rear+1)%n;
    queue[rear]=x;

}
}
void dequeue (){
if (front == -1 && rear == -1){
    cout<< " Underflow " <<endl;
}

else if (front ==rear){

    front = rear = -1;
}
else{

 front= (front+1)%n;
}
}


void display(){
    int i = front;
if (front == -1 && rear == -1){
    cout<<"Empty"<<endl;
}
else{
    while (i != rear ){
        cout<<queue[i]<< endl;
        i = (i+1)%n;
    }
    cout<<queue[rear]<<endl;
}
}


int main() {

enqueue (1);
enqueue (2);
enqueue (3);
enqueue (4);
enqueue (5);

cout << "Enqueue values are : "<<endl;
display();
cout << endl;

dequeue ();
dequeue ();

cout << "After Dequeue Enqueue values are : "<<endl;
display();
cout << endl;

enqueue (6);
enqueue (7);

cout << "Enqueue values as circular way  : "<<endl;
display();
cout << endl;

dequeue ();
dequeue ();
dequeue ();
dequeue ();

cout << "Denqueue values as circular way  : "<<endl;

display();
cout << endl;





}
