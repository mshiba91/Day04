/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterativr_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:11:22 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/26 15:45:08 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int ft_iterative_factorial(int nb)
{
	int i;
		int fact;

		
		f = 1;
		i = 1;
		while (i <= nb)
		{
			f = f * i;
			i++;
		}
		return f;
