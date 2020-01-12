/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 13:21:30 by plam              #+#    #+#             */
/*   Updated: 2020/01/12 14:03:23 by plam             ###   ########.fr       */
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
	order = -1;
	while (i < INT_SIZE)
	{
		if ((N >> i) & 1)
			order = i;
		i++;
	}
	if (order != -1)
		printf("Highest order set bit in %d is %d", N, order);
	else 
		printf("0 has no set bits.");
	return (0);
}