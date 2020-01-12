/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 11:23:57 by plam              #+#    #+#             */
/*   Updated: 2020/01/12 11:33:28 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	bit;
	int MSB;
	int	n;

	bit = sizeof(int) * 8;
	MSB = 1 << (bit - 1);
	n = -1;

	if (n & MSB)
		printf("MSB of %d is set (1).", n);
	else
		printf("MSB of %d is unset (0).", n);
	return (0);
}