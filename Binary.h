#pragma once
#include <iostream>
#include <string>
using namespace std;

struct node
{
	int data;
	node* left = NULL;
	node* right = NULL;
};
class Binary
{
private:
	node* root;

public:
	Binary(node* = NULL);
	void AddRight(int);
	void AddLeft(int);

	void PreOrder(node* root)
	{
		if (root == NULL)
			return;
		cout << root->data << "\t";
		PreOrder(root->left);
		PreOrder(root->right);
	}
};

