#include "libbclst.h"

t_bclst	*bclstsentry(t_bclst *lst)
{
	while (lst->content != NULL)
		lst = lst->next;
	return (lst);
}
