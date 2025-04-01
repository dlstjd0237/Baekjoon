#include <iostream>
using namespace std;

int main() {

	cin.tie()->sync_with_stdio(false);

	int inputCount;
	string name, MaxName;
	int price, maxPrice;
	cin >> inputCount;

	while (inputCount--) {
		int count;
		cin >> count;
		for (int i = 0; i < count; ++i)
		{
			cin >> price >> name;
			if (i == 0)
			{
				MaxName = name;
				maxPrice = price;
				continue;
			}
			if (maxPrice < price)
			{
				maxPrice = price;
				MaxName = name;
			}
		}
		std::cout << MaxName << "\n";
	}
}