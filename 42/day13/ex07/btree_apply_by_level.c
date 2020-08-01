
#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int left;
	int right;

	left = 0;
	right = 0;
	if (!root)
		return (0);
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	return (left > right ? left + 1 : right + 1);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, \
			int current_level, int is_first_elem))
{
	int	count;
	int	*levels;
	int	i;

	count = btree_level_count(root);
}
