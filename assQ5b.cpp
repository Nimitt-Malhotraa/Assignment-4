#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
void push(int value) {
cout << "Pushing " << value << endl;
int current_size = q.size();
q.push(value);
for (int i = 0; i < current_size; i++) {
q.push(q.front());
q.pop();
}
}
void pop() {
if (q.empty()) {
cout << "Stack is empty" << endl;
return;
}
cout << "Popping " << q.front() << endl;
q.pop();
}
int main() {
cout << "--- Stack with ONE Queue ---" << endl;
push(10);
push(20);
push(30);
pop();
pop();
push(40);
pop();
return 0;
}