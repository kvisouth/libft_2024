/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:44:52 by kevisout          #+#    #+#             */
/*   Updated: 2024/07/21 17:59:56 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_atoi prend en parametre une chaine de caracteres, et la convertit en int.
La string doit etre sous cette forme :
- Commence par des whitespaces
- Suivi d'un seul symbole + ou - (ou aucun)
- Suivi de chiffres.
Le parsing s'arrete d'est qu'une de ses regles n'est pas respectee.
*/

int	ft_atoi(char *str)
{
	int	pos;
	int	nbr;

	pos = 1;
	nbr = 0;
	while (*str >= 9 && *str <= 13 && *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			pos = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * pos);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac != 2)
	  return (0);
	printf("atoi    = '%d'\n", atoi(av[1]));
	printf("ft_atoi = '%d'\n", ft_atoi(av[1]));
	return (1);
}
*/
