/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:41:06 by kevisout          #+#    #+#             */
/*   Updated: 2024/08/07 11:56:46 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strncmp compare chaque lettres de s1 et s2 entre elles.
Retourne la difference de ces 2 lettres si elles ne sont pas identiques.
Sinon retourne 0.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && i < n)
		i++;
	return (s1[i] - s2[i]);
}
