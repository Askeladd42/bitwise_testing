/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 23:52:56 by plam              #+#    #+#             */
/*   Updated: 2020/01/13 00:20:51 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

#define INT_SIZE sizeof(int) * 8

int	main()
{
	int	N;
	int	cnt;
	int	MSB;
	
	N = 1;
	cnt = 0;
	while (!(N & (~INT_MAX)))
	{
		cnt++;
		N <<= 1;
	}
	printf("Total number of leading zeros = %d.", cnt);
	return (0);
}