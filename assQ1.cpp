#include <iostream>
using namespace std;
const int MAX_SIZE = 5;
int queue_array[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int value) {
if (rear == MAX_SIZE - 1) {
cout << "Queue is full." << endl;
return;
}
if (front == -1) {
front = 0;
}
rear = rear + 1;
queue_array[rear] = value;
cout << "Added " << value << " to the queue." << endl;
}
void dequeue() {
if (front == -1 || front > rear) {
cout << "Queue is empty." << endl;
return;
}
cout << "Removed " << queue_array[front] << "." << endl;
front = front + 1;
}
void display() {
if (front == -1 || front > rear) {
cout << "Queue is empty." << endl;
return;
}
cout << "Queue: ";
for (int i = front; i <= rear; i = i + 1) {
cout << queue_array[i] << " ";
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
cout << "Enter value to add: ";
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