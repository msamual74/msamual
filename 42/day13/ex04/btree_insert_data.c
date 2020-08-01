
#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*node;
	t_btree *next;

	node = *root;
	if (!node)
		node = btree_create_elem(item);
	if (cmpf(item, node->item) < 0)
		next = node->left;
	else
		next = node->right;
	btree_insert_data(&next, item, cmpf);
}
