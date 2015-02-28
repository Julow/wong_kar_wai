/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 18:54:13 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 18:56:38 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

t_bool			is_power(int nb, int p)
{
	int				tmp;

	tmp = 1;
	while (tmp < nb)
		tmp *= p;
	if (nb == tmp)
		return (true);
	return (false);
}
