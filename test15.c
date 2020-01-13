/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test15.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:52:37 by plam              #+#    #+#             */
/*   Updated: 2020/01/13 12:08:43 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	N1;
	int	N2;

	N1 = 65;
	N2 = 22;
	printf("Original value of N1 = %d\n", N1);
	printf("Original value of N2 = %d\n", N2);
	N1 ^= N2;
	N2 ^= N1;
	N1 ^= N2;
	printf("N1 after swapping = %d\n", N1);
	printf("N2 after swapping = %d\n", N2);
	return (0);
}