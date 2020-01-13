/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 09:11:39 by plam              #+#    #+#             */
/*   Updated: 2020/01/13 09:15:36 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int	main()
{
	int	N;
	int	rot;
	int	o;
	int	i;

	N = 2147483647;
	i = 0;
	z = 0;
	o = 0;
	printf("Original number = %d (in decimal)\n", N);
    while (i < INT_SIZE)
	{
		if (N & 1)
			o++;
		else
			z++;
		N >>= 1;
		i++;
	}
	printf("Total zero bit is %d\n", z);
	printf("Total one bit is %d", o);
	return (0);
}