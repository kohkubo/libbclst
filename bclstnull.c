#include "libbclst.h"

t_bclst	*bclstnull(void)
{
	t_bclst	*sentry;

	sentry = bclstnew(NULL);
	sentry->next = sentry;
	sentry->back = sentry;
	return (sentry);
}
