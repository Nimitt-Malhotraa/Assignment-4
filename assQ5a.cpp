#include <iostream>
#include <queue>
using namespace std;
queue<int> q1;
queue<int> q2;
void push(int value) {
cout << "Pushing " << value << endl;
q2.push(value);
while (!q1.empty()) {
q2.push(q1.front());
q1.pop();
}
queue<int> temp = q1;
q1 = q2;
q2 = temp;
}
void pop() {
if (q1.empty()) {
cout << "Stack is empty" << endl;
return;
}
cout << "Popping " << q1.front() << endl;
q1.pop();
}
int main() {
cout << "--- Stack with TWO Queues ---" << endl;
push(10);
push(20);
push(30);
pop();
pop();
push(40);
pop();
return 0;
}