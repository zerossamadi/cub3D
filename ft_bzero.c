/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssamadi <ssamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:45:58 by ssamadi           #+#    #+#             */
/*   Updated: 2021/01/22 10:54:49 by ssamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	nbr;
	char	*p;

	p = str;
	nbr = 0;
	while (nbr < n)
	{
		p[nbr] = '\0';
		nbr++;
	}
}