#include "libbclst.h"

void	bclstinsert_next(t_bclst *lst, t_bclst *newlst)
{
	t_bclst	*tmp_next;

	tmp_next = lst->next;
	lst->next = newlst;
	newlst->back = lst;
	newlst->next = tmp_next;
	tmp_next->back = newlst;
}
