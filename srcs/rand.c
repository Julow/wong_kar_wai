/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 12:18:24 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 17:04:32 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <time.h>
#include <stdlib.h>

int				ft_rand(int min, int max)
{
	srand(time(NULL));
	return (rand() % (max - min) + min);
}

t_bool			ft_randbool(void)
{
	srand(time(NULL));
	if (rand() % 2 == 0)
		return (true);
	return (false);
}

static int		count_void_cases(t_env *env)
{
	int		i;
	int		j;
	int		count;

	count = 0;
	i = -1;
	while (++i < env->game.size)
	{
		j = -1;
		while (++j < env->game.size)
		{
			if (env->game.map[i][j] == 0)
				count++;
		}	
	}	
	return (count);
}

void			put_rand(t_env *env)
{
	int		nb;
	int		pos;
	int		i;
	int		j;

	nb = count_void_cases(env);
	pos = ft_rand(0, nb);
	i = -1;
	while (++i < env->game.size)
	{
		j = -1;
		while (++j < env->game.size)
		{
			if (env->game.map[i][j] == 0)
				count++;
			if (count == pos)
			{
				env->game.map[i][j] = ft_randbool() ? 4 : 2;
				return ;
			}
		}	
	}	
}