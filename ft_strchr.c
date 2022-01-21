/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatifi <mlatifi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:30:37 by mlatifi           #+#    #+#             */
/*   Updated: 2022/01/21 15:44:21 by mlatifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	s_counter;
	int	s_size;

	s_counter = 0;
	s_size = ft_strlen(s) + 1;
	while (s_counter < s_size)
	{
		if (s[s_counter] == (char)c)
		{
			return (&((char *)s)[s_counter]);
		}
		s_counter++;
	}
	return (0);
}
