
#include "libft.h"
#include <stdlib.h>

void	ft_rclear(t_list *lst, void (*del)(void*))
{
	if (lst->next)
		ft_rclear(lst->next, del);
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !*lst || !del)
		return ;
	ft_rclear(*lst, del);
	*lst = NULL;
}
