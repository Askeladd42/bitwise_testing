/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test9.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:17:08 by plam              #+#    #+#             */
/*   Updated: 2020/01/13 00:18:30 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define INT_SIZE sizeof(int) * 8

int	main()
{
	int	N;
	int	cnt;
	
	N = 12;
	cnt = 0;
	while (!(N & 1))
	{
		cnt++;
		N >>= 1;
	}
	printf("Total number of trailing zeros = %d.", cnt);
	return (0);
}