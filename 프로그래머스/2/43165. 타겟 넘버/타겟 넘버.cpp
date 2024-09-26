#include <string>
#include <vector>

using namespace std;

int answer = 0;
int targetNum;
vector<int>v;
void DFS(int n, char sign, int sum) {
if (n == v.size()) {
		if (sum == targetNum) {
			answer++;
		}
		return;
	}
	
	if (sign == '+')
		sum += v[n];
	else
		sum -= v[n];
	DFS(n+1, '+', sum);
	DFS(n+1, '-', sum);
}
int solution(vector<int> numbers, int target) {
	int sum = 0;
	targetNum = target;
	v = numbers;
	DFS(0, '+', sum);
	DFS(0, '-', sum);
	return   answer/2;
}

