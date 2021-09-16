#ifndef LIBBCLST_H
# define LIBBCLST_H
# include "./../libex/libex.h"

typedef struct s_bclst
{
	struct s_bclst	*back;
	struct s_bclst	*next;
	void			*content;
}	t_bclst;

void		bclstadd_last(t_bclst **lst, t_bclst *newlst);
void		bclstadd_first(t_bclst **lst, t_bclst *newlst);
void		bclstclear(t_bclst **lst, void (*del)(void *));
void		bclstdelone(t_bclst *lst, void (*del)(void *));
t_bclst		*bclstinit(t_bclst *lst);
void		bclstinsert_back(t_bclst *lst, t_bclst *newlst);
void		bclstinsert_next(t_bclst *lst, t_bclst *newlst);
t_bclst		*bclstnew(void *content);
t_bclst		*bclstsentry(t_bclst *lst);
int			bclstsize(t_bclst *lst);
void		bclstiter(t_bclst *lst, void (*f)(void *));
t_bclst		*bclstnull(void);
t_bclst		*bclstfirst(t_bclst *lst);

#endif
