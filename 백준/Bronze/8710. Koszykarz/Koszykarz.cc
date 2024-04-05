#include <iostream>

using namespace std;

int main() {
	int k, w, m, r;
	cin >> k >> w >> m;
	r = (w - k) % m != 0 ? (w - k) / m + 1 : (w - k) / m;
	cout << r;
}