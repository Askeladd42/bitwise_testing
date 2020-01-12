/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 11:53:59 by plam              #+#    #+#             */
/*   Updated: 2020/01/12 12:06:33 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int N;
	int	nth;
	int newN;

	N = 12;
	nth = 4;
	printf("Number checked : %d\n", N);
	printf("nth bit to set (0-31): %d\n", nth);
	newN = (1 << nth) | N;
	printf("Number after setting %d bit: %d (in decimal)\n", nth, newN);
	return (0);
}