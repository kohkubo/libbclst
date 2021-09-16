#include "libbclst.h"

void	bclstiter(t_bclst *lst, void (*f)(void *))
{
	t_bclst	*tmp;

	if (!lst || !f)
		return ;
	tmp = bclstfirst(lst);
	while (tmp->content != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
