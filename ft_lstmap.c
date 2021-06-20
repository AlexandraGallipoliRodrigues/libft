#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newLst;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	newLst = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&new, del);
			return (newLst);	
		}
		ft_lstadd_back(&newLst, new);
		lst = lst->next;
 
	}
	return (newLst);
}

