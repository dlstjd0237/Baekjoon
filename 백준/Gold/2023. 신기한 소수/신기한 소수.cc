#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;

bool isPrime(int number) {
	for (int i = 2; i <= number / 2; ++i) {
		if (number % i == 0)return false;
	}

	return true;
}

void DFS(int number, int jarisu) {
	if (jarisu == n) {
		if (isPrime(number)) {
			cout << number << "\n";
		}
	}
	for (int i = 1; i < 10; ++i) {
		if (i % 2 == 0)
			continue;
		if (isPrime(number * 10 + i)) {
			DFS(number * 10 + i, jarisu + 1);
		}
	}
}


int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n;
	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);
	

}