#include <iostream>
#include <stack>
using namespace std;

int main() {
	int N;
	cin >> N;
	stack<int> stack;

	for (int i = 0; i < N; i++) {
		string index;
		cin >> index;
		
		if (index == "push") {
			int num;
			cin >> num;
			stack.push(num);
		}
		else if (index == "pop") {
			if (!stack.empty()) {
				cout << stack.top() << '\n';
				stack.pop();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (index == "size") {
			cout << stack.size() << '\n';
		}
		else if (index == "empty") {
			if (stack.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (index == "top") {
			if (!stack.empty()) {
				cout << stack.top() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}
	return 0;
}