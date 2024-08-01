#include <iostream>
using namespace std;


int main() {
	int loopCount;
	int a, b;
	cin >> loopCount;

	for (int i = 0; i < loopCount; ++i)
	{
		cin >> a >> b;
		cout << "Case " << i + 1 << ": " << a + b << endl;
	}
}