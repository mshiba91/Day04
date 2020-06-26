/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurive_factirial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:21:13 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/26 11:38:27 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(unsigned int n)

{
	if ( n <= 1)
		return 1;
	return n* ft_recursive_factorial(n - 1);
	}

