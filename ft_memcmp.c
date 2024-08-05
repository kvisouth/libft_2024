/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:02:23 by kevisout          #+#    #+#             */
/*   Updated: 2024/08/05 12:27:46 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memcmp compare les n premiers octets (interpretees par des unsigned char)
des zones memoires s1 et s2.
La valeur de retour est similaire a strcmp.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] && str2[i])
	{
		if (str1[i] == str2[i] && i < n - 1)
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}
