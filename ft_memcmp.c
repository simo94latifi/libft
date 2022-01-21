/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatifi <mlatifi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:20:39 by mlatifi           #+#    #+#             */
/*   Updated: 2022/01/21 15:29:53 by mlatifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			n_counter;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	n_counter = 0;
	if (string1 == string2 || n == 0)
		return (0);
	while (n_counter < n - 1 && (string1[n_counter] == string2[n_counter]))
		n_counter++;
	return ((int)string1[n_counter] - (int)string2[n_counter]);
}
