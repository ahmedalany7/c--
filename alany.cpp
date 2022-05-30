#include <iostream>
using namespace std;

int fib(int n) {
	if (n <= 1)
		return abs(n-1);
	return fib(n-1) + fib(n-2);
	int last = 0;
	int slast = 0;
	int a = 0;
	for (int i = 0; i < n; i++) {
		a = last + slast;
		if (a == 0) last = 1;
		slast = last;
		last = a;
		cout << a << endl;
	}
	return a;
}

int main() {
	cout << "Hello, World!" << endl;
	cout << fib(2) << endl; 
	fib(10);
	return 0;
} 