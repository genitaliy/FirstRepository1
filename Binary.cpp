#include "Binary.h"

Binary::Binary(node*)
{
}

void Binary::AddRight(int value)
{
	node* nw = new node{value, NULL,NULL};
	if (this->root == NULL)
	{
		this->root = nw;
		return;
	}
	node* help = this->root;
	while (help->right != NULL)
	help = help->right;
	help->right = nw;
}

void Binary::AddLeft(int)
{
}
