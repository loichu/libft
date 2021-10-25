
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*iter;

	if (!alst)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	iter = *alst;
	while (iter->next)
		iter = iter->next;
	iter->next = new;
}
