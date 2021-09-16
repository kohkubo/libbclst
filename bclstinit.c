#include "libbclst.h"

t_bclst	*bclstinit(t_bclst *lst)
{
	t_bclst	*sentry;

	if (!lst)
		return (NULL);
	sentry = bclstnew(NULL);
	sentry->next = lst;
	sentry->back = lst;
	lst->next = sentry;
	lst->back = sentry;
	return (sentry);
}
