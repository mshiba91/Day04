/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:43:51 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/25 16:44:02 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_recursive_factorial(unsigned int n)

{
	if ( n <= 1)
		return 1;
	return n* ft_recursive_factorial(n - 1);
	}

	int main()
{
	
		printf("%i\n", ft_recursive_factorial(6));
	return 0;
}
