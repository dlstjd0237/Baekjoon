#include <iostream>
#include <string.h>
int recursion(const char* s, int l, int r, int& n) {
	++n;
	if (l >= r)  return 1;
	else if (s[l] != s[r]) return 0;
	else  return recursion(s, l + 1, r - 1, n);
}
int isPalindrome(const char* s, int& n) {
	return recursion(s, 0, strlen(s) - 1, n);
}
int main(){
	int input;
	std::cin >> input;
	int result[1001];
	int count[1001];
	for (int i = 0; i < input; ++i)
	{
		char a[1001];
		count[i] = 0;
		std::cin >> a;
		result[i] = isPalindrome(a, count[i]);

	}
	for (int i = 0; i < input; ++i)
	{
		std::cout << result[i] << " " << count[i] << std::endl;
	}
}
