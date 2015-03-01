/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 12:18:24 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/01 10:41:42 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <time.h>
#include <stdlib.h>

t_bool			ft_randbool(void)
{
	srand(time(NULL));
	if (rand() % 2 == 0)
		return (true);
	return (false);
}
