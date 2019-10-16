#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a;
	b = a * a * a;
	c = b * b;
	a = c * c;
	b = a * b;
	cout << b;
	return 0;
}
