#include <iostream>
using namespace std;

int main() {
	int count;
	int h, w, n;
	int result;
	cin >> count;

	for (int i = 0; i < count; ++i) {
		cin >> h >> w >> n;

		result = n % h == 0 ? h * 100 + (n / h) : (n % h) * 100 + (n / h) + 1;
	
		cout << result << endl;
	}
}
