/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 09:11:39 by plam              #+#    #+#             */
/*   Updated: 2020/01/13 11:46:08 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE * 8

int	l_rot(int N, unsigned int rot)
{
	int	D_MSB;

	rot %= INT_BITS - 1;
	while (rot--)
	{
		D_MSB = (N >> (INT_BITS- 1)) & 1;
		N = (N << 1) | D_MSB;
	}
	return (N);
}

int	r_rot(int N, unsigned int rot)
{
	int	D_MSB;

	rot %= INT_BITS - 1;
	while (rot--)
	{
		D_MSB = N & 1;
		N = (N >> 1) & (~(1 << (INT_BITS - 1)));
		N = N | (D_MSB << (INT_BITS - 1));
	}
	return (N);
}

/* shorter version :

int l_rot(int N, unsigned int rot)
{
	rot %= INT_BITS - 1;
	while(rot--)
		 N = (N << 1) | (1 & (N >> INT_BITS - 1));
	return (N);
}

int r_rot(int N, unsigned int rot)
{
	rot %= INT_BITS - 1;
	while(rot--)
		num = ((N >> 1) & (~(1 << INT_BITS - 1)) | ((N & 1) << INT_BITS - 1));
	return (N);
}
*/

int	main()
{
	int				N;
	unsigned int	rot;

	N = -15;
	rot = 2;
	printf("%d left rotated %u times = %d\n\n",  N, rot, l_rot(N, rot));
	printf("%d right rotated %u times = %d\n", N, rot, r_rot(N, rot));
	return (0);
}