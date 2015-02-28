/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:49:58 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:50:10 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

int				ft_itoab(int n, char *buff)
{
	int				len;
	int				tmp;

	len = (n < 0) ? 1 : 0;
	if (n < 0)
		*buff = '-';
	tmp = n;
	while (tmp != 0)
	{
		len++;
		tmp /= 10;
	}
	buff += len;
	*(buff--) = '\0';
	while (n != 0)
	{
		*(buff--) = '0' + (n % 10);
		n /= 10;
	}
	return (len);
}
