#include <iostream>
using namespace std;
const int MAX_SIZE = 5;
int c_queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int value) {
if ((rear + 1) % MAX_SIZE == front) {
cout << "Queue is full." << endl;
return;
}
if (front == -1) {
front = 0;
}
rear = (rear + 1) % MAX_SIZE;
c_queue[rear] = value;
cout << "Added " << value << "." << endl;
}
void dequeue() {
if (front == -1) {
cout << "Queue is empty." << endl;
return;
}
cout << "Removed " << c_queue[front] << "." << endl;
if (front == rear) {
front = -1;
rear = -1;
} else {
front = (front + 1) % MAX_SIZE;
}
}
void display() {
if (front == -1) {
cout << "Queue is empty." << endl;
return;
}
cout << "Queue: ";
int i = front;
while (true) {
cout << c_queue[i] << " ";
if (i == rear) {
break;
}
i = (i + 1) % MAX_SIZE;
}
cout << endl;
}
int main() {
int choice;
int value;
while (true) {
cout << "\n1. Add (Enqueue)" << endl;
cout << "2. Remove (Dequeue)" << endl;
cout << "3. Display" << endl;
cout << "4. Exit" << endl;
cout << "Enter choice: ";
cin >> choice;
if (choice == 1) {
cout << "Enter value: ";
cin >> value;
enqueue(value);
} else if (choice == 2) {
dequeue();
} else if (choice == 3) {
display();
} else if (choice == 4) {
break;
} else {
cout << "Invalid choice." << endl;
}
}
return 0;
}