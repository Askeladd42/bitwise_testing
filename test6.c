/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 12:31:56 by plam              #+#    #+#             */
/*   Updated: 2020/01/12 13:19:33 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int N;
	int	nth;
	int newN;

	N = 22;
	nth = 4;
	printf("Number checked : %d\n", N);
	printf("nth bit to toggle (0-31): %d\n", nth);
	newN = N ^ (1 << nth);
	printf("Number after toggling %d bit: %d (in decimal)\n", nth, newN);
	return (0);
}