/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:54:59 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/26 13:18:39 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power){

	if (nb <= power)
		return 0;
	else (power <= nb);
		return nb;
}
int main()
{
	int power;
	int nb = 8;

		power = 15;
		ft_iterative_power(8, 15);
		printf("%d\n",0);
		ft_iterative_power(15 , 8);
		printf("%d\n", nb);


		return 0;
}

	
