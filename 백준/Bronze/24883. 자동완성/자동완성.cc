#include<iostream>
using namespace std;

int main() {
	char num;
	cin >> num;
	string str = num == 'n' || num == 'N' ? "Naver D2" : "Naver Whale";
	cout << str;
}