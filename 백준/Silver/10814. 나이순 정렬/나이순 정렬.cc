#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


struct person
{
	int age, idx;
	std::string name;
};

bool compare(const person& now, const person& last)
{
	if (now.age != last.age) return now.age < last.age;
	return now.idx < last.idx;
}

person f[100001];
int main() {

	std::cin.tie()->sync_with_stdio(false);

	int n;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> f[i].age >> f[i].name;
		f[i].idx = i;
	}

	std::sort(f, f + n, compare);

	for (int i = 0; i < n; ++i)
	{

		std::cout << f[i].age << " " << f[i].name << std::endl;
	}


	return 0;
}