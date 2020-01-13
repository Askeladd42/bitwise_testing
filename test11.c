/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 00:27:27 by plam              #+#    #+#             */
/*   Updated: 2020/01/13 00:30:59 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	N;
	int	flip;

	N = -22;
	flip = ~N;
	printf("Original number = %d (in decimal)\n", N);
    printf("Number after bits are flipped = %d (in decimal)", flip);
	return (0);
}