#include "libbclst.h"

t_bclst	*bclstfirst(t_bclst *lst)
{
	t_bclst	*tmp;

	tmp = bclstsentry(lst);
	tmp = tmp->next;
	return (tmp);
}
