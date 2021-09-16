#include "libbclst.h"

int	bclstsize(t_bclst *lst)
{
	int		len;
	t_bclst	*tmp;

	if (lst == NULL)
		return (0);
	tmp = bclstfirst(lst);
	len = 0;
	while (tmp->content != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
