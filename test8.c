/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:12:09 by plam              #+#    #+#             */
/*   Updated: 2020/01/12 14:18:04 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define INT_SIZE sizeof(int) * 8

int	main()
{
	int	N;
	int	order;
	int	i;

	i = 0;
	N = 72;
	order = INT_SIZE - 1;
	while (i < INT_SIZE)
	{
		if ((N >> i) & 1)
		{
			order = i;
			break;
		}
		i++;
	}
	printf("Lowest order set bit in %d is %d", N, order);
	return (0);
}