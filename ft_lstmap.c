/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 04:17:34 by bizcru            #+#    #+#             */
/*   Updated: 2024/07/08 05:06:04 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rtrn;

	rtrn = malloc(sizeof(t_list *));
	if (!lst || !f || !del || !rtrn)
		return (NULL);
	rtrn = NULL;
	while (lst)
	{
		ft_lstadd_back(&rtrn, ft_lstnew(f(lst->content)));
		if (!ft_lstlast(rtrn))
		{
			ft_lstclear(&rtrn, del);
			free(rtrn);
			return (NULL);
		}
		lst = lst->next;
	}
	return (rtrn);
}
