#include <iostream>
#include <map>

using namespace std;


void preorder(char c);
void inorder(char c);
void postorder(char c);

map<char, pair<char, char>>nodes;

int main() {

	int loopCount;
	char name, lname, rname;
	cin >> loopCount;

	for (int i = 0; i < loopCount; ++i)
	{
		cin >> name >> lname >> rname;
		nodes[name] = { lname,rname };

	}
	preorder('A'); cout << "\n";
	inorder('A'); cout << "\n";
	postorder('A'); cout << "\n";


}

void preorder(char c)
{
	cout << c;
	if (nodes[c].first != '.')
		preorder(nodes[c].first);
	if (nodes[c].second != '.')
		preorder(nodes[c].second);
}

void inorder(char c)
{
	if (nodes[c].first != '.')
		inorder(nodes[c].first);
	cout << c;
	if (nodes[c].second != '.')
		inorder(nodes[c].second);
}

void postorder(char c)
{
	if (nodes[c].first != '.')
		postorder(nodes[c].first);
	if (nodes[c].second != '.')
		postorder(nodes[c].second);
	cout << c;
}
