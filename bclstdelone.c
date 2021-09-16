#include "libbclst.h"

void	bclstdelone(t_bclst *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	if (!lst->content)
		ft_fatal("sentry can not be free.");
	(*del)(lst->content);
	lst->content = NULL;
	lst->next->back = lst->back;
	lst->back->next = lst->next;
	free(lst);
}
