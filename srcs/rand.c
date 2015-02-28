/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 12:18:24 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:53:10 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <time.h>
#include <stdlib.h>

int				ft_rand(int min, int max)
{
	return ((srand(time(NULL)) % (max - min)) + min);
}

t_bool			ft_randbool(void)
{
	if (srand(time(NULL)) % 2 == 0)
		return (true);
	return (false);
}