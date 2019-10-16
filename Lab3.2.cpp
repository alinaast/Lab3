#include <iostream>
using namespace std;
int main() {
	int a, b, c, m, n;
	cin >> a >> b >> c;
	n = a;
	m = b;
	a = c;
	b = n;
	c = m;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}