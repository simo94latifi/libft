/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatifi <mlatifi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:51:05 by mlatifi           #+#    #+#             */
/*   Updated: 2022/01/21 15:51:48 by mlatifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	n_counter;
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	n_counter = 0;
	while (n_counter < n)
	{
		if (cs1[n_counter] - cs2[n_counter] != 0)
		{
			return (cs1[n_counter] - cs2[n_counter]);
		}
		n_counter++;
	}
	return (0);
}
