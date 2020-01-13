/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test14.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:22:36 by plam              #+#    #+#             */
/*   Updated: 2020/01/13 11:52:06 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int	main()
{
	int	N;
	int	index;
	int	i;
	int	bin[INT_SIZE];

	N = 2;
	index = INT_SIZE - 1;
	i = 0;
	while (index >= 0)
	{
		bin[index] = N & 1;
		index--;
		N >>= 1;
	}
	printf("Converted binary: ");
	while (i < INT_SIZE)
	{
		printf("%d", bin[i]);
		i++;
	}
	return (0);
}