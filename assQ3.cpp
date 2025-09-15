#include <iostream>
#include <queue>
using namespace std;
void printQueue(queue<int> q) {
while (!q.empty()) {
cout << q.front() << " ";
q.pop();
}
cout << endl;
}
int main() {
queue<int> my_queue;
my_queue.push(4);
my_queue.push(7);
my_queue.push(11);
my_queue.push(20);
my_queue.push(5);
my_queue.push(9);
cout << "Original Queue: ";
printQueue(my_queue);
int half_size = my_queue.size() / 2;
queue<int> temp_queue;
for (int i = 0; i < half_size; i++) {
temp_queue.push(my_queue.front());
my_queue.pop();
}
while (!temp_queue.empty()) {
my_queue.push(temp_queue.front());
temp_queue.pop();
my_queue.push(my_queue.front());
my_queue.pop();
}
cout << "Interleaved Queue: ";
printQueue(my_queue);
return 0;
}