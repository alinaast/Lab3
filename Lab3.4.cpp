#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int y = 3 * pow(x, 6) - 6 * x * x - 7;
	cout << y;
	return 0;
}