/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatifi <mlatifi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:11:45 by mlatifi           #+#    #+#             */
/*   Updated: 2022/01/21 15:25:13 by mlatifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	count;

	count = ft_lstsize(lst);
	while (count > 1)
	{
		lst = lst->next;
		count--;
	}
	return (lst);
}
