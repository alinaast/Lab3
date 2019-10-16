#include <iostream>
using namespace std;
int main() {
	int a, b, c, m, n;
	cin >> a >> b >> c;
	m = a;
	n = b;
	a = n;
	b = c;
	c = m;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}