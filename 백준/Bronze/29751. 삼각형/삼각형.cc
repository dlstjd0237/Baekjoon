#include <iostream>
using namespace std;

int main() {

	cin.tie()->sync_with_stdio(false);
	float W, H;

	cin >> W >> H;

	cout << fixed;
	cout.precision(1);
	

	cout << ((W * H) / 2);
}