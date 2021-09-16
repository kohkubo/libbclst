#include "libbclst.h"

void	bclstinsert_back(t_bclst *lst, t_bclst *newlst)
{
	t_bclst	*tmp_back;

	tmp_back = lst->back;
	lst->back = newlst;
	newlst->next = lst;
	newlst->back = tmp_back;
	tmp_back->next = newlst;
}
