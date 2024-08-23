#include <iostream>
using namespace std;

struct node // 노드 
{
	int data;
	node* left;
	node* right;
};

node* MakeNode(int n) // 노드를 만드는 함수
{
	node* nd = new node;
	nd->data = n;
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}
node* root = NULL;

void Insert(node* r, node* node)
{
	if (root == NULL)
		root = node;
	else
	{
		if (r->data < node->data) {//루트의 오른쪽
			if (r->right == NULL)
				r->right = node;
			else
				Insert(r->right, node);
		}
		else {
			if (r->left == NULL)
				r->left = node;
			else
				Insert(r->left, node);
		}
	}
}
void postorder(node* nd)
{

	if (nd->left != NULL)
		postorder(nd->left);
	if (nd->right != NULL)
		postorder(nd->right);

	cout << nd->data<<endl;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int value;
	while (cin >> value)
	{
		Insert(root, MakeNode(value));
	}
	postorder(root);
	return 0;
}
