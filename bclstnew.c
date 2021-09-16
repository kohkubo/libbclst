#include "libbclst.h"

t_bclst	*bclstnew(void *content)
{
	t_bclst	*elem;

	elem = ft_xcalloc(sizeof(t_bclst));
	elem->content = content;
	elem->next = NULL;
	elem->back = NULL;
	return (elem);
}
