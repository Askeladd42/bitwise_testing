/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 12:14:01 by plam              #+#    #+#             */
/*   Updated: 2020/01/12 12:32:44 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int N;
	int	nth;
	int newN;

	N = 13;
	nth = 2;
	printf("Number checked : %d\n", N);
	printf("nth bit to clear (0-31): %d\n", nth);
	newN = N & (~(1 << nth));
	printf("Number after clearing %d bit: %d (in decimal)\n", nth, newN);
	return (0);
}