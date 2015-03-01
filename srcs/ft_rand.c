/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 10:41:08 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 12:58:50 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <time.h>
#include <stdlib.h>

int				ft_rand(int min, int max)
{
	srand(time(NULL));
	return (rand() % (max - min + 1) + min);
}
