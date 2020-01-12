/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 11:36:18 by plam              #+#    #+#             */
/*   Updated: 2020/01/12 11:53:23 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int n;
	int	nth;
	int bitS;

	n = 12;
	nth = 2;
	printf("Number checked : %d\n", n);
	printf("nth bit to check (0-31): %d\n", nth);
	bitS = (n >> nth) & 1;
	printf("The %d bit is set to %d", nth, bitS);
	return (0);
}