#include "libbclst.h"

void	bclstclear(t_bclst **lst, void (*del)(void *))
{
	t_bclst	*tmp;
	t_bclst	*anc;

	if (!del || !lst || !*lst)
		return ;
	anc = bclstfirst(*lst);
	while (anc->content != NULL)
	{
		tmp = anc->next;
		bclstdelone(anc, del);
		anc = tmp;
	}
	free(anc);
	*lst = NULL;
}
