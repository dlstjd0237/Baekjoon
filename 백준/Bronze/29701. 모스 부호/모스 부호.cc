#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

//int solution(vector<vector<int>> lines);
int main() {

	unordered_map<string, char> m;
	m[".-"] = 'A';
	m["-..."] = 'B';
	m["-.-."] = 'C';
	m["-.."] = 'D';
	m["."] = 'E';
	m["..-."] = 'F';
	m["--."] = 'G';
	m["...."] = 'H';
	m[".."] = 'I';
	m[".---"] = 'J';
	m["-.-"] = 'K';
	m[".-.."] = 'L';
	m["--"] = 'M';
	m["-."] = 'N';
	m["---"] = 'O';
	m[".--."] = 'P';
	m["--.-"] = 'Q';
	m[".-."] = 'R';
	m["..."] = 'S';
	m["-"] = 'T';
	m["..-"] = 'U';
	m["...-"] = 'V';
	m[".--"] = 'W';
	m["-..-"] = 'X';
	m["-.--"] = 'Y';
	m["--.."] = 'Z';

	// 숫자
	m[".----"] = '1';
	m["..---"] = '2';
	m["...--"] = '3';
	m["....-"] = '4';
	m["....."] = '5';
	m["-...."] = '6';
	m["--..."] = '7';
	m["---.."] = '8';
	m["----."] = '9';
	m["-----"] = '0';

	// 기호
	m["--..--"] = ',';
	m[".-.-.-"] = '.';
	m["..--.."] = '?';
	m["---..."] = ':';
	m["-....-"] = '-';
	m[".--.-."] = '@';

	int inputCount;
	string str;
	cin >> inputCount;
	for (int i = 0; i < inputCount; i++)
	{
		cin >> str;
		cout << m[str];
	}

}



