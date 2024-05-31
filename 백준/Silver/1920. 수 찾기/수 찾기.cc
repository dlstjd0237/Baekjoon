#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
using namespace std;

int LowerBound(const vector<int>& v, int x) {
	const int n = v.size();
	int lo = -1, hi = n;
	while (lo + 1 < hi) {
		int mid = (lo + hi) / 2;
		if (!(v[mid] >= x)) lo = mid;
		else hi = mid;
	}
	return hi;
}

int UpperBound(const vector<int>& v, int x) {
	const int n = v.size();
	int lo = -1, hi = n;
	while (lo + 1 < hi) {
		int mid = (lo + hi) / 2;
		if (!(v[mid] > x)) lo = mid;
		else hi = mid;
	}
	return hi;
}

int main() {
	vector <int> qwer;
	int count1, count2;
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> count1;
	for (int i = 0; i < count1; ++i)
	{
		int num;
		cin >> num;
		qwer.push_back(num);
	}
	sort(qwer.begin(), qwer.end());
	cin >> count2;
	int* arr2 = new int[count2];
	for (int i = 0; i < count2; ++i)
	{
		cin >> arr2[i];
	}

	for (int i = 0; i < count2; ++i)
	{
		if (UpperBound(qwer, arr2[i]) == LowerBound(qwer, arr2[i]))
		{
			cout << "0" << "\n";
		}
		else {
			cout << "1" << "\n";
		}
	}


}



