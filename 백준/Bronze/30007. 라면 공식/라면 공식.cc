#include <iostream>
using namespace std;

int main() {

	cin.tie()->sync_with_stdio(false);
	int input, a, b, x;

	cin >> input;

	while (input--) {
		cin >> a >> b >> x;
		cout << a * (x - 1) + b << endl;
	}

	return 0;
}