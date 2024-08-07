/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:03:46 by kevisout          #+#    #+#             */
/*   Updated: 2024/08/07 11:08:40 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Retourne 1 si la lettre 'c' est presente dans 'set' */
int	is_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_trimmed_len(char const *s, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (is_trim(s[i], set) && s[i])
			i++;
		while (!is_trim(s[i], set) && s[i])
		{
			i++;
			len++;
		}
		while (is_trim(s[i], set) && s[i])
			i++;
	}
	return (len);
}

/*
ft_strtrim alloue avec malloc et retourne une chaine de caractere.
Cette chaine de caractere, est 's1', mais sans les caracteres de 'set'
au debut et a la fin.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		y;
	char	*ret;

	i = 0;
	while (is_trim(s1[i], set) && s1[i])
		i++;
	ret = malloc((get_trimmed_len(s1, set) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	y = 0;
	while (!is_trim(s1[i], set) && s1[i])
		ret[y++] = s1[i++];
	ret[y] = '\0';
	return (ret);
}
