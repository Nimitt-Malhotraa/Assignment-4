#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main() {
string input_str = "aabc";
cout << "Input String: " << input_str << endl;
int char_counts[256] = {0};
queue<char> q;
cout << "Output: ";
for (char c : input_str) {
char_counts[c]++;
q.push(c);
while (!q.empty()) {
if (char_counts[q.front()] > 1) {
q.pop();
} else {
break;
}
}
if (q.empty()) {
cout << "-1 ";
} else {
cout << q.front() << " ";
}
}
cout << endl;
return 0;
}