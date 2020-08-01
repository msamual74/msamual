
#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*new;

	new = malloc(sizeof(t_btree));
	if (node)
	{
		new->item = item;
		new->left = NULL;
		new->right = NULL;
	}
	return(new);
}
