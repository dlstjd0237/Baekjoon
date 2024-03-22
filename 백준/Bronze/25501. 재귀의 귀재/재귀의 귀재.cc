	
#include <iostream>
#include <string.h>

int recursion(const char* s, int l, int r, int& n) {
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else { n++; return recursion(s, l + 1, r - 1, n); }
}

int isPalindrome(const char* s, int& n) {
	return recursion(s, 0, strlen(s) - 1, n);
}
int main(){
		int input;
	std::cin >> input;
	int c[1001];
	int b[1001];
	for (int i = 0; i < input; ++i)
	{
		char a[1001];
		b[i] = 0;
		std::cin >> a;
		c[i] = isPalindrome(a, b[i]);

	}

	for (int i = 0; i < input; ++i)
	{
		std::cout << c[i] << " " << ++b[i] << std::endl;
	}
}