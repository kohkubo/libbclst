#include "./../libbclst.h"

typedef struct s_content
{
	int num;
	int index;
}	t_content;

void	print_content(void *p)
{
	if (p != NULL)
		printf("%d : %d\n", ((t_content *)p)->index, ((t_content *)p)->num);
	else
		printf("(null)\n");
}

int main()
{
	t_content *p;
	int index = 0;

	p = ft_xcalloc(sizeof(p));
	p->num = 1;
	p->index = index++;
	t_bclst *lst = bclstinit(bclstnew(p));

	p = ft_xcalloc(sizeof(p));
	p->num = 2;
	p->index = index++;
	bclstadd_last(&lst, bclstnew(p));
	p = ft_xcalloc(sizeof(p));
	p->num = 3;
	p->index = index++;
	bclstadd_last(&lst, bclstnew(p));

	int num = 4;
	for(int i=0; i<10; i++)
	{
		p = ft_xcalloc(sizeof(p));
		p->num = num++;
		p->index = index++;
		bclstadd_last(&lst, bclstnew(p));
	}

	bclstiter(lst, print_content);
	printf("%d\n", bclstsize(lst));

	bclstclear(&lst, free);
	printf("%d\n", bclstsize(lst));
	return (0);
}
